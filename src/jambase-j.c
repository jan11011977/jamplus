/* Generated by mkjambase from Jambase */
const char *jambase[] = {
/* Jambase-j */
"JAMBASE ?= Jambase.jam ;\n",
"if $(UNIX) {\n",
"DOT		default	= . ;\n",
"DOTDOT		default	= .. ;\n",
"SLASH		default = / ;\n",
"} else if $(NT) || $(OS2) {\n",
"DOT		default	= . ;\n",
"DOTDOT		default	= .. ;\n",
"SLASH		default = \\\\ ;\n",
"} else if $(VMS) {\n",
"DOT		default	= [] ;\n",
"DOTDOT		default	= [-] ;\n",
"SLASH		default = . ;\n",
"} else if $(MAC) {\n",
"DOT		default = \":\" ;\n",
"DOTDOT		default = \"::\" ;\n",
"SLASH		default = \":\" ;\n",
"}\n",
"SEARCH on $(JAMBASE) =\n",
"$(DOT)\n",
"$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)$(SLASH)$(DOTDOT)\n",
"$(JAM_PROCESS_PATH)\n",
";\n",
"include $(JAMBASE) ;\n",
0 };