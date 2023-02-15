SRC += sofle.c

# Only load these source files if the features are enabled. Keyboards can
# enable or disable these features in their own rules.mk files.

ifeq ($(strip $(USER_MOUSE_JIGGLE_ENABLE)), yes)
	SRC += mouse_jiggle.c
    OPT_DEFS += -DUSER_MOUSE_JIGGLE_ENABLE
endif

ifeq ($(strip $(USER_SECRETS_ENABLE)), yes)
	SRC += secrets.c
    OPT_DEFS += -DUSER_SECRETS_ENABLE
endif

ifeq ($(strip $(USER_SUPER_ALT_TAB_ENABLE)), yes)
	SRC += super_alt_tab.c
    OPT_DEFS += -DUSER_SUPER_ALT_TAB_ENABLE
endif

# Define these last so any other logic can set up some defines first
SRC += matrix_scan.c \
		process_records.c
