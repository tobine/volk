/* This file is part of volk library; see volk.h for version/license details */
#include "volk.h"

#ifdef _WIN32
#	include <Windows.h>
#else
#	include <dlfcn.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

static void volkGenLoadLoader(void* context, PFN_vkVoidFunction (*load)(void*, const char*))
{
#define VOLKGEN(name) name = (PFN_##name)load(context, #name);
#include "volkgen_loader.h"
#undef VOLKGEN
}

static void volkGenLoadInstance(void* context, PFN_vkVoidFunction (*load)(void*, const char*))
{
#define VOLKGEN(name) name = (PFN_##name)load(context, #name);
#include "volkgen_instance.h"
#undef VOLKGEN
}

static void volkGenLoadDevice(void* context, PFN_vkVoidFunction (*load)(void*, const char*))
{
#define VOLKGEN(name) name = (PFN_##name)load(context, #name);
#include "volkgen_device.h"
#undef VOLKGEN
}

static void volkGenLoadDeviceTable(struct VolkDeviceTable* table, void* context, PFN_vkVoidFunction (*load)(void*, const char*))
{
#define VOLKGEN(name) table->name = (PFN_##name)load(context, #name);
#include "volkgen_device.h"
#undef VOLKGEN
}

static PFN_vkVoidFunction vkGetInstanceProcAddrStub(void* context, const char* name)
{
	return vkGetInstanceProcAddr((VkInstance)context, name);
}

static PFN_vkVoidFunction vkGetDeviceProcAddrStub(void* context, const char* name)
{
	return vkGetDeviceProcAddr((VkDevice)context, name);
}

VkResult volkInitialize()
{
#ifdef _WIN32
	HMODULE module = LoadLibraryA("vulkan-1.dll");
	if (!module)
		return VK_ERROR_INITIALIZATION_FAILED;

	vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)GetProcAddress(module, "vkGetInstanceProcAddr");
#else
	void* module = dlopen("libvulkan.so", RTLD_NOW | RTLD_LOCAL);
	if (!module)
		module = dlopen("libvulkan.so.1", RTLD_NOW | RTLD_LOCAL);
	if (!module)
		return VK_ERROR_INITIALIZATION_FAILED;

	vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)dlsym(module, "vkGetInstanceProcAddr");
#endif

	volkGenLoadLoader(NULL, vkGetInstanceProcAddrStub);

	return VK_SUCCESS;
}

uint32_t volkGetInstanceVersion()
{
#if defined(VK_VERSION_1_1)
	uint32_t apiVersion = 0;
	if (vkEnumerateInstanceVersion && vkEnumerateInstanceVersion(&apiVersion) == VK_SUCCESS)
		return apiVersion;
#endif

	if (vkCreateInstance)
		return VK_API_VERSION_1_0;

	return 0;
}

void volkLoadInstance(VkInstance instance)
{
	volkGenLoadInstance(instance, vkGetInstanceProcAddrStub);
	volkGenLoadDevice(instance, vkGetInstanceProcAddrStub);
}

void volkLoadDevice(VkDevice device)
{
	volkGenLoadDevice(device, vkGetDeviceProcAddrStub);
}

void volkLoadDeviceTable(struct VolkDeviceTable* table, VkDevice device)
{
	volkGenLoadDeviceTable(table, device, vkGetDeviceProcAddrStub);
}

#ifdef __GNUC__
#	pragma GCC visibility push(hidden)
#endif

PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr;

#define VOLKGEN(name) PFN_##name name;
#include "volkgen_loader.h"
#include "volkgen_instance.h"
#include "volkgen_device.h"
#undef VOLKGEN

#ifdef __GNUC__
#	pragma GCC visibility pop
#endif

#ifdef __cplusplus
}
#endif
