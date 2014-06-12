//                     ****    Lista ingressi   remoti ***

#define  P_Marcia()         ( (input & 0x00000002) ?  TRUE : FALSE )  // I01
#define  P_Arresto()        ( (input & 0x00000001) ?  FALSE : TRUE )  // I02
#define  P_SfridiAvanti()   ( (input & 0x00000010) ?  TRUE : FALSE )  // I03
#define  P_UscitaPacchi()   ( (input & 0x00000020) ?  TRUE : FALSE )  // I04
#define  P_EstrattoreSu()   ( (input & 0x00000004) ?  TRUE : FALSE )  // I05
#define  P_EstrattoreGiu()  ( (input & 0x00000008) ?  TRUE : FALSE )  // I06
#define  P_Emergenze()      ( (input & 0x00000040) ?  FALSE : TRUE )  // I07
#define  P_Ripristino()     ( (input & 0x00000080) ?  TRUE : FALSE )  // I08


#define  LS_LivelloOlio()    ( (input & 0x00000200) ?  TRUE : FALSE ) // I11
#define  FC_PressaAlta()     ( (input & 0x00000100) ?  TRUE : FALSE ) // I12
#define  FT_AnsaCartaAlta()  ( (input & 0x00001000) ?  TRUE : FALSE ) // I13
#define  P_Introduzione()    ( (input & 0x00002000) ?  TRUE : FALSE ) // I14
#define  P_CartaAvanti()     ( (input & 0x00000400) ?  TRUE : FALSE ) // I15
#define  i16()               ( (input & 0x00000800) ?  TRUE : FALSE ) // I16
#define  i17()               ( (input & 0x00004000) ?  TRUE : FALSE ) // I17
#define  i18()               ( (input & 0x00008000) ?  TRUE : FALSE ) // I18


//                     ****    Lista uscite  remote  ***

#define  Q01On()                 ( output |= 0x00000800 )   // Q01
#define  Q01Off()                ( output &= 0xFFFFF7FF )   // 
#define  Q02On()                 ( output |= 0x00000400 )   // Q02
#define  Q02Off()                ( output &= 0xFFFFFBFF )   // 
#define  UscitaPacchiOn()        ( output |= 0x00008000 )   // Q03
#define  UscitaPacchiOff()       ( output &= 0xFFFF7FFF )   // 
#define  AbbassaPianale()        ( output &= 0xFFFF9FFF , output |= 0x00004000 ) // Q04
#define  AlzaPianale()           ( output &= 0xFFFF9FFF , output |= 0x00002000 ) // Q05
#define  FermaPianale()          ( output &= 0xFFFF9FFF )   // 
#define  AlimFustellaOn()        ( output |= 0x00001000 )   // Q06
#define  AlimFustellaOff()       ( output &= 0xFFFFEFFF )   //
#define  TrainoCartaOn()         ( output |= 0x00000200 )   // Q07
#define  TrainoCartaOff()        ( output &= 0xFFFFFDFF )   //
#define  AlimTrainoSvolgOn()     ( output |= 0x00000100 )   // Q08
#define  AlimTrainoSvolgOff()    ( output &= 0xFFFFFEFF )   //

#define  FrizioneOn()            ( output |= 0x00000008 )   // Q11 = 1
#define  FrizioneOff()           ( output &= 0xFFFFFFF7 )   // Q11 = 0
#define  LubrificaOn()           ( output |= 0x00000004 )   // Q12 = 1
#define  LubrificaOff()          ( output &= 0xFFFFFFFB )   // Q12 = 0
#define  LampeggianteOn()        ( output |= 0x00000080 )   // Q13 = 1
#define  LampeggianteOff()       ( output &= 0xFFFFFF7F )   // Q13 = 0
#define  TrainoSvolgOn()         ( output |= 0x00000040 )   // Q14 = 1
#define  TrainoSvolgOff()        ( output &= 0xFFFFFFBF )   // Q14 = 0
#define  FustellaOn()            ( output |= 0x00000020 )   // Q15 = 1
#define  FustellaOff()           ( output &= 0xFFFFFFDF )   // Q15 = 0
#define  AnomaliaOn()            ( output |= 0x00000010 )   // Q16 = 1
#define  AnomaliaOff()           ( output &= 0xFFFFFFEF )   // Q16 = 0
#define  Nastro2sfridiOn()       ( output |= 0x00000002 )   // Q17 = 1
#define  Nastro2sfridiOff()      ( output &= 0xFFFFFFFD )   // Q17 = 0
#define  Nastro1sfridiOn()       ( output |= 0x00000001 )   // Q18 = 1
#define  Nastro1sfridiOff()      ( output &= 0xFFFFFFFE )   // Q18 = 0


#define  Is_Lubrifica()          (output & 0x00000004 ? TRUE : FALSE)
#define  Is_SvolgOn()            (output & 0x00000040 ? TRUE : FALSE)
#define  Is_FrizOn()             (output & 0x00000008 ? TRUE : FALSE)
#define  Is_FustOn()             (output & 0x00001020 ? TRUE : FALSE) 
#define  Is_FustOff()            (output & 0x00000020 ? FALSE : TRUE) 
#define  Is_SfridiOn()           (output & 0x00000003 ? TRUE : FALSE) 


