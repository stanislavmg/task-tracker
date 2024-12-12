#pragma once

#include <string>
#include <string_view>

#include <userver/components/component_list.hpp>

namespace tracker {

void AppendAddUserToQueue(userver::components::ComponentList& component_list);

}  // namespace tracker
