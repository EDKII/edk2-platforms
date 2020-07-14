/** @file
  Copyright (c) 2006 - 2017, Intel Corporation. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _USB_DEVICE_MODE_DXE_H_
#define _USB_DEVICE_MODE_DXE_H_

#include <Uefi.h>
#include <PiDxe.h>
#include <Library/DebugLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UsbDeviceLib.h>
#include <Protocol/UsbDeviceModeProtocol.h>
#include "XdciCommon.h"
#include "XdciDevice.h"


///
/// Function declaration
///
EFI_STATUS
UsbdSetupHdlr (
  IN EFI_USB_DEVICE_REQUEST    *CtrlRequest
  );

extern EFI_USB_DEVICE_MODE_PROTOCOL  mUsbDeviceModeProtocol;

#endif

