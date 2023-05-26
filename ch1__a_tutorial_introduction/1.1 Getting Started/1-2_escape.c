main() {
     printf("\\a: (\a)\n");
     printf("abc\\b: (abc\b)\n");
     printf("abc\n");		/* Ctrl-Q Ctrl-H */
     printf("\\e: (\e)\n");
     printf("\\f: (\f)\n");
     printf("\\n: (\n)\n");
     printf("\\r: (\n");
     printf("hello\rworld)\n");
     printf("\\t: (\t)\n");
     printf("\\v: (\v)\n");
     
     printf("--------------------\n");
     printf("\\\\: (\\)\n");
     printf("\\\": (\")\n");
     printf("\\c: (\c)\n");
     printf("\\d: (\d)\n");
     printf("\\g: (\g)\n");
     printf("\\h: (\h)\n");
     printf("\\i: (\i)\n");
     printf("\\j: (\j)\n");
     printf("\\k: (\k)\n");
     printf("\\l: (\l)\n");
     printf("\\m: (\m)\n");
     printf("\\o: (\o)\n");
     printf("\\p: (\p)\n");
     printf("\\q: (\q)\n");
     printf("\\s: (\s)\n");
     /* incomplete universal character name */
     /* printf("\\u: \u\n"); */
     printf("\\w: (\w)\n");
     /* \x used with no following hex digits */
     /* printf("\\x: \x\n"); */
     printf("\\y: (\y)\n");
     printf("\\z: (\z)\n");
     
     printf("--------------------\n");     
     printf("\\0: (\0");
     printf(")\n");
     printf("\\x0: (\x0)");
     printf(")\n");

     printf("\\1: (\1)\t \\x1: (\x1)\n");
     printf("\\2: (\2)\t \\x2: (\x2)\n");
     printf("\\3: (\3)\t \\x3: (\x3)\n");
     printf("\\4: (\4)\t \\x4: (\x4)\n");
     printf("\\5: (\5)\t \\x5: (\x5)\n");
     printf("\\6: (\6)\t \\x6: (\x6)\n");
     printf("\\7: (\7)\t \\x7: (\x7)\n");
     printf("\\8: (\8)\n");
     printf("\\9: (\9)\n");
     printf("\\10: (\10)\t \\x8: (\x8)\n");   /* \b */
     printf("\\11: (\11)\t \\x9: (\x9)\n");   /* \t */
     printf("--------------------\n");          
     printf("\\12: (\12)\t \\xA: (\xA)\n");
     printf("--------------------\n");          
     printf("\\13: (\13)\t \\xB: (\xB)\n");   /* \v */
     printf("\\14: (\14)\t \\xC: (\xC)\n");   /* \f */
     printf("--------------------\n");     
     printf("\\15: (\15)\t \\xD: (\xD)\n");   /* \r */
     printf("--------------------\n");          
     printf("\\16: (\16)\t \\xE: (\xE)\n");
     printf("\\17: (\17)\t \\xF: (\xF)\n");
     printf("\\18: (\18)\n");		      /* \1 and 8 */
     printf("\\19: (\19)\n");		      /* \1 and 9 */
     printf("\\20: (\20)\t \\x10: (\x10)\n"); /* date line escape */
     printf("\\21: (\21)\t \\x11: (\x11)\n"); /* device control 1 */
     printf("\\22: (\22)\t \\x12: (\x12)\n"); /* dc2 */
     printf("\\23: (\23)\t \\x13: (\x13)\n"); /* dc3 */
     printf("\\24: (\24)\t \\x14: (\x14)\n"); /* dc4 */
     printf("\\25: (\25)\t \\x15: (\x15)\n");
     printf("\\26: (\26)\t \\x16: (\x16)\n");
     printf("\\27: (\27)\t \\x17: (\x17)\n");
     printf("\\28: (\28)\n");	/* \2 and 8 */
     printf("\\29: (\29)\n");	/* \2 and 9 */
     printf("\\30: (\30)\t \\x18: (\x18)\n"); 
     printf("\\31: (\31)\t \\x19: (\x19)\n");
     printf("\\32: (\32)\t \\x1A: (\x1A)\n");
     printf("\\33: (\33)\t \\x1B: (\x1B)\n");
     printf("\\34: (\34)\t \\x1C: (\x1C)\n");
     printf("\\35: (\35)\t \\x1D: (\x1D)\n");
     printf("\\36: (\36)\t \\x1E: (\x1E)\n");
     printf("\\37: (\37)\t \\x1F: (\x1F)\n");
     printf("\\38: (\38)\n");	/* \3 and 8 */
     printf("\\39: (\39)\n");	/* \3 and 9 */

     printf("\\40: (\40)\t \\x20: (\x20)\n");     
     printf("\\41: (\41)\t \\x21: (\x21)\n");
     printf("\\42: (\42)\t \\x22: (\x22)\n");
     printf("\\43: (\43)\t \\x23: (\x23)\n");
     printf("\\44: (\44)\t \\x24: (\x24)\n");
     printf("\\45: (\45)\t \\x25: (\x25)\n");
     printf("\\46: (\46)\t \\x26: (\x26)\n");
     printf("\\47: (\47)\t \\x27: (\x27)\n");
     printf("\\48: (\48)\n");	/* \4 and 8 */
     printf("\\49: (\49)\n");	/* \4 and 9 */
     printf("\\50: (\50)\t \\x28: (\x28)\n");
     printf("\\51: (\51)\t \\x29: (\x29)\n");
     printf("\\52: (\52)\t \\x2A: (\x2A)\n");
     printf("\\53: (\53)\t \\x2B: (\x2B)\n");
     printf("\\54: (\54)\t \\x2C: (\x2C)\n");
     printf("\\55: (\55)\t \\x2D: (\x2D)\n");
     printf("\\56: (\56)\t \\x2E: (\x2E)\n");
     printf("\\57: (\57)\t \\x2F: (\x2F)\n");
     printf("\\58: (\58)\n"); 	/* \5 and 8 */
     printf("\\59: (\59)\n");	/* \5 and 9 */

     printf("\\60: (\60)\t \\x30: (\x30)\n");
     printf("\\61: (\61)\t \\x31: (\x31)\n");
     printf("\\62: (\62)\t \\x32: (\x32)\n");
     printf("\\63: (\63)\t \\x33: (\x33)\n");
     printf("\\64: (\64)\t \\x34: (\x34)\n");
     printf("\\65: (\65)\t \\x35: (\x35)\n");
     printf("\\66: (\66)\t \\x36: (\x36)\n");
     printf("\\67: (\67)\t \\x37: (\x37)\n");
     printf("\\68: (\68)\n"); 	/* \6 and 8 */
     printf("\\69: (\69)\n");	/* \6 and 9 */
     printf("\\70: (\70)\t \\x38: (\x38)\n");
     printf("\\71: (\71)\t \\x39: (\x39)\n");
     printf("\\72: (\72)\t \\x3A: (\x3A)\n");
     printf("\\73: (\73)\t \\x3B: (\x3B)\n");
     printf("\\74: (\74)\t \\x3C: (\x3C)\n");
     printf("\\75: (\75)\t \\x3D: (\x3D)\n");
     printf("\\76: (\76)\t \\x3E: (\x3E)\n");
     printf("\\77: (\77)\t \\x3F: (\x3F)\n");
     printf("\\78: (\78)\n");	/* \a and 8 */
     printf("\\79: (\79)\n");	/* \a and 9 */
     printf("\\80: (\80)\n");  	/* 8 and 0 */
     printf("\\90: (\90)\n");  	/* 9 and 0 */
     
     printf("\\100: (\100)\t \\x40: (\x40)\n");
     printf("\\101: (\101)\t \\x41: (\x41)\n");
     printf("\\102: (\102)\t \\x42: (\x42)\n");
     printf("\\103: (\103)\t \\x43: (\x43)\n");
     printf("\\104: (\104)\t \\x44: (\x44)\n");
     printf("\\105: (\105)\t \\x45: (\x45)\n");
     printf("\\106: (\106)\t \\x46: (\x46)\n");
     printf("\\107: (\107)\t \\x47: (\x47)\n");
     printf("\\108: (\108)\n");	/* \b and 8 */
     printf("\\109: (\109)\n"); /* \b and 9 */
     printf("\\110: (\110)\t \\x48: (\x48)\n");
     printf("\\111: (\111)\t \\x49: (\x49)\n");
     printf("\\112: (\112)\t \\x4A: (\x4A)\n");
     printf("\\113: (\113)\t \\x4B: (\x4B)\n");
     printf("\\114: (\114)\t \\x4C: (\x4C)\n");
     printf("\\115: (\115)\t \\x4D: (\x4D)\n");
     printf("\\116: (\116)\t \\x4E: (\x4E)\n");
     printf("\\117: (\117)\t \\x4F: (\x4F)\n");
     printf("\\118: (\118)\n");	/* \t and 8 */
     printf("\\119: (\119)\n");	/* \t and 9 */

     printf("\\120: (\120)\t \\x50: (\x50)\n");
     printf("\\121: (\121)\t \\x51: (\x51)\n");
     printf("\\122: (\122)\t \\x52: (\x52)\n");
     printf("\\123: (\123)\t \\x53: (\x53)\n");
     printf("\\124: (\124)\t \\x54: (\x54)\n");
     printf("\\125: (\125)\t \\x55: (\x55)\n");
     printf("\\126: (\126)\t \\x56: (\x56)\n");
     printf("\\127: (\127)\t \\x57: (\x57)\n");
     printf("\\128: (\128)\n");	/* \n and 8 */
     printf("--------------------\n");         
     printf("\\129: (\129)\n");	/* \n and 9 */
     printf("--------------------\n");      
     printf("\\130: (\130)\t \\x58: (\x58)\n");
     printf("\\131: (\131)\t \\x59: (\x59)\n");
     printf("\\132: (\132)\t \\x5A: (\x5A)\n");
     printf("\\133: (\133)\t \\x5B: (\x5B)\n");
     printf("\\134: (\134)\t \\x5C: (\x5C)\n");
     printf("\\135: (\135)\t \\x5D: (\x5D)\n");
     printf("\\136: (\136)\t \\x5E: (\x5E)\n");
     printf("\\137: (\137)\t \\x5F: (\x5F)\n");
     printf("\\138: (\138)\n");	/* \v and 8 */
     printf("\\139: (\139)\n");	/* \v and 9 */

     printf("\\140: (\140)\t \\x60: (\x60)\n");
     printf("\\141: (\141)\t \\x61: (\x61)\n");
     printf("\\142: (\142)\t \\x62: (\x62)\n");
     printf("\\143: (\143)\t \\x63: (\x63)\n");
     printf("\\144: (\144)\t \\x64: (\x64)\n");
     printf("\\145: (\145)\t \\x65: (\x65)\n");
     printf("\\146: (\146)\t \\x66: (\x66)\n");
     printf("\\147: (\147)\t \\x67: (\x67)\n");
     printf("\\148: (\148)\n");	/* \f and 8 */
     printf("\\149: (\149)\n");	/* \f and 9 */
     printf("\\150: (\150)\t \\x68: (\x68)\n");
     printf("\\151: (\151)\t \\x69: (\x69)\n");
     printf("\\152: (\152)\t \\x6A: (\x6A)\n");
     printf("\\153: (\153)\t \\x6B: (\x6B)\n");
     printf("\\154: (\154)\t \\x6C: (\x6C)\n");
     printf("\\155: (\155)\t \\x6D: (\x6D)\n");     
     printf("\\156: (\156)\t \\x6E: (\x6E)\n");
     printf("\\157: (\157)\t \\x6F: (\x6F)\n");
     printf("\\158: (\158)\n");
     printf("\\159: (\159)\n");
     printf("\\160: (\160)\t \\x70: (\x70)\n");
     printf("\\161: (\161)\t \\x71: (\x71)\n");
     printf("\\162: (\162)\t \\x72: (\x72)\n");
     printf("\\163: (\163)\t \\x73: (\x73)\n");
     printf("\\164: (\164)\t \\x74: (\x74)\n");     
     printf("\\165: (\165)\t \\x75: (\x75)\n");
     printf("\\166: (\166)\t \\x76: (\x76)\n");
     printf("\\167: (\167)\t \\x77: (\x77)\n");
     printf("\\168: (\168)\n");
     printf("\\169: (\169)\n");
     printf("\\170: (\170)\t \\x78: (\x78)\n");
     printf("\\171: (\171)\t \\x79: (\x79)\n");
     printf("\\172: (\172)\t \\x7A: (\x7A)\n");
     printf("\\173: (\173)\t \\x7B: (\x7B)\n");
     printf("\\174: (\174)\t \\x7C: (\x7C)\n");
     printf("\\175: (\175)\t \\x7D: (\x7D)\n");
     printf("\\176: (\176)\t \\x7E: (\x7E)\n");
     printf("\\177: (\177)\t \\x7F: (\x7F)\n");

     printf("--------------------\n");
     printf("\\x00: (\x00)");
     printf(")\n");
     printf("--------------------\n");               
     printf("\\08: (\08)");    /* \0; string ended by \0, so 8) is omitted */
     printf(")\n");
     printf("\\09: (\09)");    /* \0; string ended by \0, so 9) is omitted */
     printf(")\n");
     printf("\\x08: (\x08)\n");	/* \b */
     printf("\\x09: (\x09)\n");	/* \t */
     printf("\\018: (\018)\n");	/* \1 and 8 */
     printf("\\019: (\019)\n");	/* \1 and 9 */
     printf("\\028: (\028)\n");	/* \2 and 8 */
     printf("\\029: (\029)\n");	/* \2 and 9 */
     printf("\\038: (\038)\n");	/* \3 and 8 */
     printf("\\039: (\039)\n");	/* \3 and 9 */
     printf("\\048: (\048)\n");	/* \4 and 8 */
     printf("\\049: (\049)\n");	/* \4 and 9 */
     printf("\\058: (\058)\n");	/* \5 and 8 */
     printf("\\059: (\059)\n");	/* \5 and 9 */
     printf("\\068: (\068)\n");	/* \6 and 8 */
     printf("\\069: (\069)\n");	/* \6 and 9 */


     printf("'\\0' : %d\n", '\0');
     printf("'\\0' : x%x\n", '\0');
     printf("'0'  : %d\n", '0');
     printf("'0'  : x%x\n", '0');
}
