/*
 * Copyright (C) 2016 ARM Limited. All rights reserved.
 *
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MALI_GRALLOC_REFERENCE_H_
#define MALI_GRALLOC_REFERENCE_H_

#include <cutils/native_handle.h>
#include <optional>

int mali_gralloc_reference_retain(buffer_handle_t handle);
int mali_gralloc_reference_release(buffer_handle_t handle);
int mali_gralloc_reference_validate(buffer_handle_t handle);
int mali_gralloc_reference_map(buffer_handle_t handle);

std::optional<void*> mali_gralloc_reference_get_buf_addr(buffer_handle_t handle);
std::optional<void*> mali_gralloc_reference_get_metadata_addr(buffer_handle_t handle);
int mali_gralloc_reference_lock_retain(buffer_handle_t handle);
int mali_gralloc_reference_lock_release(buffer_handle_t handle);

#endif /* MALI_GRALLOC_REFERENCE_H_ */
