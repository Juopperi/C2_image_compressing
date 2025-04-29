# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "DATA_DEPTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "DATA_WIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "INPUT_WIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "PIXEL_COUNT" -parent ${Page_0}


}

proc update_PARAM_VALUE.DATA_DEPTH { PARAM_VALUE.DATA_DEPTH } {
	# Procedure called to update DATA_DEPTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.DATA_DEPTH { PARAM_VALUE.DATA_DEPTH } {
	# Procedure called to validate DATA_DEPTH
	return true
}

proc update_PARAM_VALUE.DATA_WIDTH { PARAM_VALUE.DATA_WIDTH } {
	# Procedure called to update DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.DATA_WIDTH { PARAM_VALUE.DATA_WIDTH } {
	# Procedure called to validate DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.INPUT_WIDTH { PARAM_VALUE.INPUT_WIDTH } {
	# Procedure called to update INPUT_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.INPUT_WIDTH { PARAM_VALUE.INPUT_WIDTH } {
	# Procedure called to validate INPUT_WIDTH
	return true
}

proc update_PARAM_VALUE.PIXEL_COUNT { PARAM_VALUE.PIXEL_COUNT } {
	# Procedure called to update PIXEL_COUNT when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.PIXEL_COUNT { PARAM_VALUE.PIXEL_COUNT } {
	# Procedure called to validate PIXEL_COUNT
	return true
}


proc update_MODELPARAM_VALUE.DATA_WIDTH { MODELPARAM_VALUE.DATA_WIDTH PARAM_VALUE.DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.DATA_WIDTH}] ${MODELPARAM_VALUE.DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.INPUT_WIDTH { MODELPARAM_VALUE.INPUT_WIDTH PARAM_VALUE.INPUT_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.INPUT_WIDTH}] ${MODELPARAM_VALUE.INPUT_WIDTH}
}

proc update_MODELPARAM_VALUE.DATA_DEPTH { MODELPARAM_VALUE.DATA_DEPTH PARAM_VALUE.DATA_DEPTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.DATA_DEPTH}] ${MODELPARAM_VALUE.DATA_DEPTH}
}

proc update_MODELPARAM_VALUE.PIXEL_COUNT { MODELPARAM_VALUE.PIXEL_COUNT PARAM_VALUE.PIXEL_COUNT } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.PIXEL_COUNT}] ${MODELPARAM_VALUE.PIXEL_COUNT}
}

