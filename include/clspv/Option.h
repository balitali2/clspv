// Copyright 2018 The Clspv Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

namespace clspv {
namespace Option {

// Returns true if code generation can use SPV_KHR_16bit_storage.
bool F16BitStorage();

// Returns true if each kernel must use its own descriptor set for all arguments.
bool DistinctKernelDescriptorSets();

// Returns true if code generation should avoid single-index OpCompositeInsert
// instructions into struct types.  Use complete OpCompositeConstruct instead.
// TODO(dneto): Remove this eventually when drivers are fixed.
bool HackInserts();

// Returns true if numeric scalar and vector Undef values should be replaced
// with OpConstantNull.  Works around a driver bug.
// TODO(dneto): Remove this eventually when drivers are fixed.
bool HackUndef();

// Returns true if POD kernel arguments should be passed in via uniform buffers.
bool PodArgsInUniformBuffer();

// Returns true if SPIR-V IDs for functions should be emitted to stderr during
// code generation.
bool ShowIDs();

} // namespace Option
} // namespace clspv