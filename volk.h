/**
 * volk
 *
 * Copyright (C) 2018, by Arseny Kapoulkine (arseny.kapoulkine@gmail.com)
 * Report bugs and download new versions at https://github.com/zeux/volk
 *
 * This library is distributed under the MIT License. See notice at the end of this file.
 */
#ifndef VOLK_H_
#define VOLK_H_

#if defined(VULKAN_H_) && !defined(VK_NO_PROTOTYPES)
#	error To use volk, you need to define VK_NO_PROTOTYPES before including vulkan.h
#endif

/* VOLK_GENERATE_VERSION */
#define VOLK_HEADER_VERSION 71
/* VOLK_GENERATE_VERSION */

#ifndef VK_NO_PROTOTYPES
#	define VK_NO_PROTOTYPES
#endif

#ifndef VULKAN_H_
#	include <vulkan/vulkan.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct VolkDeviceTable;

/**
 * Initialize library by loading Vulkan loader; call this function before creating the Vulkan instance.
 *
 * Returns VK_SUCCESS on success and VK_ERROR_INITIALIZATION_FAILED otherwise.
 */
VkResult volkInitialize();

/**
 * Get Vulkan instance version supported by the Vulkan loader, or 0 if Vulkan isn't supported
 *
 * Returns 0 if volkInitialize wasn't called or failed.
 */
uint32_t volkGetInstanceVersion();

/**
 * Load global function pointers using application-created VkInstance; call this function after creating the Vulkan instance.
 */
void volkLoadInstance(VkInstance instance);

/**
 * Load global function pointers using application-created VkDevice; call this function after creating the Vulkan device.
 *
 * Note: this is not suitable for applications that want to use multiple VkDevice objects concurrently.
 */
void volkLoadDevice(VkDevice device);

/**
 * Load function pointers using application-created VkDevice into a table.
 * Application should use function pointers from that table instead of using global function pointers.
 */
void volkLoadDeviceTable(struct VolkDeviceTable* table, VkDevice device);

/**
 * Device-specific function pointer table
 */
struct VolkDeviceTable
{
#define VOLKGEN(name, ret, args) PFN_##name name;
#include "volkgen_device.h"
#undef VOLKGEN
};

/**
 * Function prototypes; each function is using a function pointer defined in volk.c
 */
extern PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr;

#define VOLKGEN(name, ret, args) extern PFN_##name name;
#include "volkgen_loader.h"
#include "volkgen_instance.h"
#include "volkgen_device.h"
#undef VOLKGEN

#ifdef __cplusplus
}
#endif

#endif

/**
 * Copyright (c) 2018 Arseny Kapoulkine
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/
