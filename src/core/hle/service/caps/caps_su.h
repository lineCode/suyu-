// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/hle/service/service.h"

namespace Core {
class System;
}

namespace Service::Capture {

class IScreenShotApplicationService final : public ServiceFramework<IScreenShotApplicationService> {
public:
    explicit IScreenShotApplicationService(Core::System& system_);
    ~IScreenShotApplicationService() override;

private:
    void SetShimLibraryVersion(HLERequestContext& ctx);
};

} // namespace Service::Capture
