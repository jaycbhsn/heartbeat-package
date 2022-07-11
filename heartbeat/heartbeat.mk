################################################################################
#
# Heartbeat package
#
################################################################################

HEARTBEAT_VERSION = 1.0
HEARTBEAT_SITE = $(BR2_EXTERNAL_LITEX_VEXRISCV_PATH)/package/heartbeat/src
HEARTBEAT_SITE_METHOD = local

define HEARTBEAT_BUILD_CMDS
    $(MAKE) CC="$(TARGET_CC)" LD="$(TARGET_LD)" -C $(@D)
endef

define HEARTBEAT_INSTALL_TARGET_CMDS
	$(INSTALL) -D -m 0755 $(@D)/heartbeat  $(TARGET_DIR)/usr/bin
endef

$(eval $(generic-package))
