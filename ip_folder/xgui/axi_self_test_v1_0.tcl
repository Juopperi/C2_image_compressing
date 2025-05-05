# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "CONFIG_AREA" -parent ${Page_0}
  ipgui::add_param $IPINST -name "C_S_AXI_ADDR_WIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "C_S_AXI_DATA_WIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "READ_AREA" -parent ${Page_0}
  ipgui::add_param $IPINST -name "REG_RW_DEPTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "WRITE_AREA" -parent ${Page_0}


}

proc update_PARAM_VALUE.CONFIG_AREA { PARAM_VALUE.CONFIG_AREA } {
	# Procedure called to update CONFIG_AREA when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.CONFIG_AREA { PARAM_VALUE.CONFIG_AREA } {
	# Procedure called to validate CONFIG_AREA
	return true
}

proc update_PARAM_VALUE.C_S_AXI_ADDR_WIDTH { PARAM_VALUE.C_S_AXI_ADDR_WIDTH } {
	# Procedure called to update C_S_AXI_ADDR_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_S_AXI_ADDR_WIDTH { PARAM_VALUE.C_S_AXI_ADDR_WIDTH } {
	# Procedure called to validate C_S_AXI_ADDR_WIDTH
	return true
}

proc update_PARAM_VALUE.C_S_AXI_DATA_WIDTH { PARAM_VALUE.C_S_AXI_DATA_WIDTH } {
	# Procedure called to update C_S_AXI_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_S_AXI_DATA_WIDTH { PARAM_VALUE.C_S_AXI_DATA_WIDTH } {
	# Procedure called to validate C_S_AXI_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.READ_AREA { PARAM_VALUE.READ_AREA } {
	# Procedure called to update READ_AREA when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.READ_AREA { PARAM_VALUE.READ_AREA } {
	# Procedure called to validate READ_AREA
	return true
}

proc update_PARAM_VALUE.REG_RW_DEPTH { PARAM_VALUE.REG_RW_DEPTH } {
	# Procedure called to update REG_RW_DEPTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.REG_RW_DEPTH { PARAM_VALUE.REG_RW_DEPTH } {
	# Procedure called to validate REG_RW_DEPTH
	return true
}

proc update_PARAM_VALUE.WRITE_AREA { PARAM_VALUE.WRITE_AREA } {
	# Procedure called to update WRITE_AREA when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.WRITE_AREA { PARAM_VALUE.WRITE_AREA } {
	# Procedure called to validate WRITE_AREA
	return true
}


proc update_MODELPARAM_VALUE.C_S_AXI_DATA_WIDTH { MODELPARAM_VALUE.C_S_AXI_DATA_WIDTH PARAM_VALUE.C_S_AXI_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_S_AXI_DATA_WIDTH}] ${MODELPARAM_VALUE.C_S_AXI_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_S_AXI_ADDR_WIDTH { MODELPARAM_VALUE.C_S_AXI_ADDR_WIDTH PARAM_VALUE.C_S_AXI_ADDR_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_S_AXI_ADDR_WIDTH}] ${MODELPARAM_VALUE.C_S_AXI_ADDR_WIDTH}
}

proc update_MODELPARAM_VALUE.CONFIG_AREA { MODELPARAM_VALUE.CONFIG_AREA PARAM_VALUE.CONFIG_AREA } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.CONFIG_AREA}] ${MODELPARAM_VALUE.CONFIG_AREA}
}

proc update_MODELPARAM_VALUE.WRITE_AREA { MODELPARAM_VALUE.WRITE_AREA PARAM_VALUE.WRITE_AREA } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.WRITE_AREA}] ${MODELPARAM_VALUE.WRITE_AREA}
}

proc update_MODELPARAM_VALUE.READ_AREA { MODELPARAM_VALUE.READ_AREA PARAM_VALUE.READ_AREA } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.READ_AREA}] ${MODELPARAM_VALUE.READ_AREA}
}

proc update_MODELPARAM_VALUE.REG_RW_DEPTH { MODELPARAM_VALUE.REG_RW_DEPTH PARAM_VALUE.REG_RW_DEPTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.REG_RW_DEPTH}] ${MODELPARAM_VALUE.REG_RW_DEPTH}
}

