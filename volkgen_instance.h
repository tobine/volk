/* This file is part of volk library and is automatically generated; do not modify it */
#if defined(VK_VERSION_1_0)
VOLKGEN(vkCreateDevice, VkResult, (VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice))
VOLKGEN(vkDestroyInstance, void, (VkInstance instance, const VkAllocationCallbacks* pAllocator))
VOLKGEN(vkEnumerateDeviceExtensionProperties, VkResult, (VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties))
VOLKGEN(vkEnumerateDeviceLayerProperties, VkResult, (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties))
VOLKGEN(vkEnumeratePhysicalDevices, VkResult, (VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices))
VOLKGEN(vkGetDeviceProcAddr, PFN_vkVoidFunction, (VkDevice device, const char* pName))
VOLKGEN(vkGetPhysicalDeviceFeatures, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures))
VOLKGEN(vkGetPhysicalDeviceFormatProperties, void, (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties))
VOLKGEN(vkGetPhysicalDeviceImageFormatProperties, VkResult, (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties))
VOLKGEN(vkGetPhysicalDeviceMemoryProperties, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties))
VOLKGEN(vkGetPhysicalDeviceProperties, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties))
VOLKGEN(vkGetPhysicalDeviceQueueFamilyProperties, void, (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties))
VOLKGEN(vkGetPhysicalDeviceSparseImageFormatProperties, void, (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties))
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
VOLKGEN(vkEnumeratePhysicalDeviceGroups, VkResult, (VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties))
VOLKGEN(vkGetPhysicalDeviceExternalBufferProperties, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties))
VOLKGEN(vkGetPhysicalDeviceExternalFenceProperties, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties))
VOLKGEN(vkGetPhysicalDeviceExternalSemaphoreProperties, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties))
VOLKGEN(vkGetPhysicalDeviceFeatures2, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures))
VOLKGEN(vkGetPhysicalDeviceFormatProperties2, void, (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties))
VOLKGEN(vkGetPhysicalDeviceImageFormatProperties2, VkResult, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties))
VOLKGEN(vkGetPhysicalDeviceMemoryProperties2, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties))
VOLKGEN(vkGetPhysicalDeviceProperties2, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties))
VOLKGEN(vkGetPhysicalDeviceQueueFamilyProperties2, void, (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties))
VOLKGEN(vkGetPhysicalDeviceSparseImageFormatProperties2, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties))
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_acquire_xlib_display)
VOLKGEN(vkAcquireXlibDisplayEXT, VkResult, (VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display))
VOLKGEN(vkGetRandROutputDisplayEXT, VkResult, (VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay))
#endif /* defined(VK_EXT_acquire_xlib_display) */
#if defined(VK_EXT_debug_report)
VOLKGEN(vkCreateDebugReportCallbackEXT, VkResult, (VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback))
VOLKGEN(vkDebugReportMessageEXT, void, (VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage))
VOLKGEN(vkDestroyDebugReportCallbackEXT, void, (VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator))
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
VOLKGEN(vkCreateDebugUtilsMessengerEXT, VkResult, (VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger))
VOLKGEN(vkDestroyDebugUtilsMessengerEXT, void, (VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator))
VOLKGEN(vkSubmitDebugUtilsMessageEXT, void, (VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData))
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_EXT_direct_mode_display)
VOLKGEN(vkReleaseDisplayEXT, VkResult, (VkPhysicalDevice physicalDevice, VkDisplayKHR display))
#endif /* defined(VK_EXT_direct_mode_display) */
#if defined(VK_EXT_display_surface_counter)
VOLKGEN(vkGetPhysicalDeviceSurfaceCapabilities2EXT, VkResult, (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities))
#endif /* defined(VK_EXT_display_surface_counter) */
#if defined(VK_EXT_sample_locations)
VOLKGEN(vkGetPhysicalDeviceMultisamplePropertiesEXT, void, (VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties))
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_KHR_android_surface)
VOLKGEN(vkCreateAndroidSurfaceKHR, VkResult, (VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
#endif /* defined(VK_KHR_android_surface) */
#if defined(VK_KHR_device_group_creation)
VOLKGEN(vkEnumeratePhysicalDeviceGroupsKHR, VkResult, (VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties))
#endif /* defined(VK_KHR_device_group_creation) */
#if defined(VK_KHR_display)
VOLKGEN(vkCreateDisplayModeKHR, VkResult, (VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode))
VOLKGEN(vkCreateDisplayPlaneSurfaceKHR, VkResult, (VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
VOLKGEN(vkGetDisplayModePropertiesKHR, VkResult, (VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties))
VOLKGEN(vkGetDisplayPlaneCapabilitiesKHR, VkResult, (VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities))
VOLKGEN(vkGetDisplayPlaneSupportedDisplaysKHR, VkResult, (VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays))
VOLKGEN(vkGetPhysicalDeviceDisplayPlanePropertiesKHR, VkResult, (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties))
VOLKGEN(vkGetPhysicalDeviceDisplayPropertiesKHR, VkResult, (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties))
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_external_fence_capabilities)
VOLKGEN(vkGetPhysicalDeviceExternalFencePropertiesKHR, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties))
#endif /* defined(VK_KHR_external_fence_capabilities) */
#if defined(VK_KHR_external_memory_capabilities)
VOLKGEN(vkGetPhysicalDeviceExternalBufferPropertiesKHR, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties))
#endif /* defined(VK_KHR_external_memory_capabilities) */
#if defined(VK_KHR_external_semaphore_capabilities)
VOLKGEN(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties))
#endif /* defined(VK_KHR_external_semaphore_capabilities) */
#if defined(VK_KHR_get_physical_device_properties2)
VOLKGEN(vkGetPhysicalDeviceFeatures2KHR, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures))
VOLKGEN(vkGetPhysicalDeviceFormatProperties2KHR, void, (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties))
VOLKGEN(vkGetPhysicalDeviceImageFormatProperties2KHR, VkResult, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties))
VOLKGEN(vkGetPhysicalDeviceMemoryProperties2KHR, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties))
VOLKGEN(vkGetPhysicalDeviceProperties2KHR, void, (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties))
VOLKGEN(vkGetPhysicalDeviceQueueFamilyProperties2KHR, void, (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties))
VOLKGEN(vkGetPhysicalDeviceSparseImageFormatProperties2KHR, void, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties))
#endif /* defined(VK_KHR_get_physical_device_properties2) */
#if defined(VK_KHR_get_surface_capabilities2)
VOLKGEN(vkGetPhysicalDeviceSurfaceCapabilities2KHR, VkResult, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities))
VOLKGEN(vkGetPhysicalDeviceSurfaceFormats2KHR, VkResult, (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats))
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_KHR_mir_surface)
VOLKGEN(vkCreateMirSurfaceKHR, VkResult, (VkInstance instance, const VkMirSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
VOLKGEN(vkGetPhysicalDeviceMirPresentationSupportKHR, VkBool32, (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, MirConnection* connection))
#endif /* defined(VK_KHR_mir_surface) */
#if defined(VK_KHR_surface)
VOLKGEN(vkDestroySurfaceKHR, void, (VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator))
VOLKGEN(vkGetPhysicalDeviceSurfaceCapabilitiesKHR, VkResult, (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities))
VOLKGEN(vkGetPhysicalDeviceSurfaceFormatsKHR, VkResult, (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats))
VOLKGEN(vkGetPhysicalDeviceSurfacePresentModesKHR, VkResult, (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes))
VOLKGEN(vkGetPhysicalDeviceSurfaceSupportKHR, VkResult, (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported))
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_wayland_surface)
VOLKGEN(vkCreateWaylandSurfaceKHR, VkResult, (VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
VOLKGEN(vkGetPhysicalDeviceWaylandPresentationSupportKHR, VkBool32, (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display))
#endif /* defined(VK_KHR_wayland_surface) */
#if defined(VK_KHR_win32_surface)
VOLKGEN(vkCreateWin32SurfaceKHR, VkResult, (VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
VOLKGEN(vkGetPhysicalDeviceWin32PresentationSupportKHR, VkBool32, (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex))
#endif /* defined(VK_KHR_win32_surface) */
#if defined(VK_KHR_xcb_surface)
VOLKGEN(vkCreateXcbSurfaceKHR, VkResult, (VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
VOLKGEN(vkGetPhysicalDeviceXcbPresentationSupportKHR, VkBool32, (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id))
#endif /* defined(VK_KHR_xcb_surface) */
#if defined(VK_KHR_xlib_surface)
VOLKGEN(vkCreateXlibSurfaceKHR, VkResult, (VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
VOLKGEN(vkGetPhysicalDeviceXlibPresentationSupportKHR, VkBool32, (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID))
#endif /* defined(VK_KHR_xlib_surface) */
#if defined(VK_MVK_ios_surface)
VOLKGEN(vkCreateIOSSurfaceMVK, VkResult, (VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
#endif /* defined(VK_MVK_ios_surface) */
#if defined(VK_MVK_macos_surface)
VOLKGEN(vkCreateMacOSSurfaceMVK, VkResult, (VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
#endif /* defined(VK_MVK_macos_surface) */
#if defined(VK_NN_vi_surface)
VOLKGEN(vkCreateViSurfaceNN, VkResult, (VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface))
#endif /* defined(VK_NN_vi_surface) */
#if defined(VK_NVX_device_generated_commands)
VOLKGEN(vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX, void, (VkPhysicalDevice physicalDevice, VkDeviceGeneratedCommandsFeaturesNVX* pFeatures, VkDeviceGeneratedCommandsLimitsNVX* pLimits))
#endif /* defined(VK_NVX_device_generated_commands) */
#if defined(VK_NV_external_memory_capabilities)
VOLKGEN(vkGetPhysicalDeviceExternalImageFormatPropertiesNV, VkResult, (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties))
#endif /* defined(VK_NV_external_memory_capabilities) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
VOLKGEN(vkGetPhysicalDevicePresentRectanglesKHR, VkResult, (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
