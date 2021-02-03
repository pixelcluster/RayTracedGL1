// This file was generated by GenerateShaderCommon.py

#include "../Common.h"

enum FramebufferImageIndex
{
    FB_IMAGE_ALBEDO = 0,
    FB_IMAGE_NORMAL = 1,
    FB_IMAGE_NORMAL_PREV = 2,
    FB_IMAGE_NORMAL_GEOMETRY = 3,
    FB_IMAGE_NORMAL_GEOMETRY_PREV = 4,
    FB_IMAGE_METALLIC_ROUGHNESS = 5,
    FB_IMAGE_METALLIC_ROUGHNESS_PREV = 6,
    FB_IMAGE_DEPTH = 7,
    FB_IMAGE_DEPTH_PREV = 8,
};

extern const uint32_t ShFramebuffers_Count;
extern const VkFormat ShFramebuffers_Formats[];
extern const uint32_t ShFramebuffers_Bindings[];
extern const uint32_t ShFramebuffers_BindingsSwapped[];
extern const char *const ShFramebuffers_DebugNames[];

