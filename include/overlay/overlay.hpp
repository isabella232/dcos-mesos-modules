/**
 * This file is © 2014 Mesosphere, Inc. (“Mesosphere”). Mesosphere
 * licenses this file to you solely pursuant to the following terms
 * (and you may not use this file except in compliance with such
 * terms):
 *
 * 1) Subject to your compliance with the following terms, Mesosphere
 * hereby grants you a nonexclusive, limited, personal,
 * non-sublicensable, non-transferable, royalty-free license to use
 * this file solely for your internal business purposes.
 *
 * 2) You may not (and agree not to, and not to authorize or enable
 * others to), directly or indirectly:
 *   (a) copy, distribute, rent, lease, timeshare, operate a service
 *   bureau, or otherwise use for the benefit of a third party, this
 *   file; or
 *
 *   (b) remove any proprietary notices from this file.  Except as
 *   expressly set forth herein, as between you and Mesosphere,
 *   Mesosphere retains all right, title and interest in and to this
 *   file.
 *
 * 3) Unless required by applicable law or otherwise agreed to in
 * writing, Mesosphere provides this file on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied,
 * including, without limitation, any warranties or conditions of
 * TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * 4) In no event and under no legal theory, whether in tort (including
 * negligence), contract, or otherwise, unless required by applicable
 * law (such as deliberate and grossly negligent acts) or agreed to in
 * writing, shall Mesosphere be liable to you for damages, including
 * any direct, indirect, special, incidental, or consequential damages
 * of any character arising as a result of these terms or out of the
 * use or inability to use this file (including but not limited to
 * damages for loss of goodwill, work stoppage, computer failure or
 * malfunction, or any and all other commercial damages or losses),
 * even if Mesosphere has been advised of the possibility of such
 * damages.
 */

#ifndef __OVERLAY_OVERLAY_HPP__
#define __OVERLAY_OVERLAY_HPP__

// ONLY USEFUL AFTER RUNNING PROTOC.
#include <string>

#include <overlay/overlay.pb.h>

namespace mesos {
namespace modules {
namespace overlay {


constexpr char MESOS_BRIDGE_PREFIX[] = "m-";
constexpr char DOCKER_BRIDGE_PREFIX[] = "d-";
constexpr char MASTER_MANAGER_PROCESS_ID[] = "overlay-master";
constexpr char AGENT_MANAGER_PROCESS_ID[] = "overlay-agent";

#define LINUX_NET_DEV_NAME_LENGTH  15
#define MAX_OVERLAY_NAME                                                    \
    ((std::string(DOCKER_BRIDGE_PREFIX).size() >                            \
     std::string(MESOS_BRIDGE_PREFIX).size()) ?                             \
    LINUX_NET_DEV_NAME_LENGTH - std::string(MESOS_BRIDGE_PREFIX).size() :   \
    LINUX_NET_DEV_NAME_LENGTH - std::string(DOCKER_BRIDGE_PREFIX).size())

} // namespace overlay{
} // namespace modules {
} // namespace mesos {

#endif // __OVERLAY_OVERLAY_HPP__
