
# By module get header
HEADERS_BUILD := \
  $(patsubst %,$(OBJ_DIR)/mods/%.h,$(subst .,/,$(foreach i,$(MODS_ENABLE_OBJ),$(call get,$(call get,$i,type),qualifiedName))))

$(HEADERS_BUILD): mk/image.mk $(AUTOCONF_DIR)/mods.mk
	@$(MKDIR) $(@D) && printf "%b" '$(__header_gen)' > $@
