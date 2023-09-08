.PHONY: clean All

All:
	@echo "----------Building project:[ BT2 - Debug ]----------"
	@cd "BT2" && "$(MAKE)" -f  "BT2.mk"
clean:
	@echo "----------Cleaning project:[ BT2 - Debug ]----------"
	@cd "BT2" && "$(MAKE)" -f  "BT2.mk" clean
