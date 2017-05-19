; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=Cstack9
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "air.h"
LastPage=0

ClassCount=19
Class1=CAirApp
Class2=CAirDoc
Class3=CAirView
Class4=CMainFrame
Class7=Creceptor

ResourceCount=16
Resource1=IDD_STACK10_DIALOG
Resource2=IDD_STACK6_DIALOG
Resource3=IDD_ABOUTBOX
Class5=CChildFrame
Class6=CAboutDlg
Resource4=IDD_STACK4_DIALOG
Class8=Cstack1
Resource5=IDR_AIRTYPE
Class9=Cstack2
Resource6=IDD_STACK3_DIALOG
Class10=Cstack3
Resource7=IDD_STACK1_DIALOG
Class11=Cdata
Resource8=IDD_STACK8_DIALOG
Class12=Cstack4
Resource9=IDD_DATA_DIALOG
Class13=Cstack5
Resource10=IDD_RECEPTOR_DIALOG
Class14=Cstack6
Resource11=IDD_STACK7_DIALOG
Class15=Cstack7
Resource12=IDR_MAINFRAME
Class16=Cstack8
Resource13=IDD_STACK5_DIALOG
Class17=Cstack9
Resource14=IDD_STACK9_DIALOG
Class18=Cstack10
Resource15=IDD_STACK2_DIALOG
Class19=Cgrid
Resource16=IDD_GRID_DIALOG

[CLS:CAirApp]
Type=0
HeaderFile=air.h
ImplementationFile=air.cpp
Filter=N

[CLS:CAirDoc]
Type=0
HeaderFile=airDoc.h
ImplementationFile=airDoc.cpp
Filter=N
LastObject=ID_RECEPTORGRID_GRID
BaseClass=CDocument
VirtualFilter=DC

[CLS:CAirView]
Type=0
HeaderFile=airView.h
ImplementationFile=airView.cpp
Filter=C
LastObject=CAirView
BaseClass=CScrollView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M


[CLS:CAboutDlg]
Type=0
HeaderFile=air.cpp
ImplementationFile=air.cpp
Filter=D
LastObject=ID_DRAWGRAPH_DRAWGRAPH

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342308480
Control2=IDC_STATIC,static,1342308352
Control3=IDOK,button,1342373889
Control4=IDC_STATIC,static,1342177283

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_MRU_FILE1
Command4=ID_APP_EXIT
Command5=ID_VIEW_TOOLBAR
Command6=ID_HELP_FINDER
Command7=ID_APP_ABOUT
CommandCount=7

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_SAVEASTEXTFILE_SAVEASMFILE
Command5=ID_SAVEASTEXTFILE_SAVEASTEXTFILE
Command6=ID_CALCULATE_CALCULATE
Command7=ID_DRAWGRAPH_DRAWGRAPH
Command8=ID_DRAWPIEGRAPH_DRAWPIEGRAPH
Command9=ID_DRAWTIMEDEPENDENTGRAPH_DRAWTIMEDEPENDENTGRAPH
Command10=ID_CONTEXT_HELP
Command11=ID_APP_ABOUT
CommandCount=11

[MNU:IDR_AIRTYPE]
Type=1
Class=CAirView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_MRU_FILE1
Command7=ID_APP_EXIT
Command8=ID_VIEW_TOOLBAR
Command9=ID_SAVEASTEXTFILE_SAVEASTEXTFILE
Command10=ID_SAVEASTEXTFILE_SAVEASMFILE
Command11=ID_RECEPTOR_RECEPTORLOCATION
Command12=ID_RECEPTORGRID_GRID
Command13=ID_DATA_DATA
Command14=ID_STACK1_STACK1DATA
Command15=ID_STACK2_STACK2DATA
Command16=ID_STACK3_STACK3DATA
Command17=ID_STACK4_STACK4DATA
Command18=ID_STACK5_STACK5DATA
Command19=ID_STACK6_STACK6DATA
Command20=ID_STACK7_STACK7DATA
Command21=ID_STACK8_STACK8DATA
Command22=ID_STACK9_STACK9DATA
Command23=ID_STACK10_STACK10DATA
Command24=ID_CALCULATE_CALCULATE
Command25=ID_DRAWGRAPH_DRAWGRAPH
Command26=ID_DRAWPIEGRAPH_DRAWPIEGRAPH
Command27=ID_DRAWTIMEDEPENDENTGRAPH_DRAWTIMEDEPENDENTGRAPH
Command28=ID_WINDOW_NEW
Command29=ID_WINDOW_CASCADE
Command30=ID_WINDOW_TILE_HORZ
Command31=ID_WINDOW_ARRANGE
Command32=ID_HELP_FINDER
Command33=ID_APP_ABOUT
CommandCount=33

[DLG:IDD_RECEPTOR_DIALOG]
Type=1
Class=Creceptor
ControlCount=45
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT_X1,edit,1350631552
Control4=IDC_EDIT_Y1,edit,1350631552
Control5=IDC_EDIT_Z1,edit,1350631552
Control6=IDC_EDIT_X2,edit,1350631552
Control7=IDC_EDIT_Y2,edit,1350631552
Control8=IDC_EDIT_Z2,edit,1350631552
Control9=IDC_EDIT_X3,edit,1350631552
Control10=IDC_EDIT_Y3,edit,1350631552
Control11=IDC_EDIT_Z3,edit,1350631552
Control12=IDC_EDIT_X4,edit,1350631552
Control13=IDC_EDIT_Y4,edit,1350631552
Control14=IDC_EDIT_Z4,edit,1350631552
Control15=IDC_EDIT_X5,edit,1350631552
Control16=IDC_EDIT_Y5,edit,1350631552
Control17=IDC_EDIT_Z5,edit,1350631552
Control18=IDC_EDIT_X6,edit,1350631552
Control19=IDC_EDIT_Y6,edit,1350631552
Control20=IDC_EDIT_Z6,edit,1350631552
Control21=IDC_EDIT_X7,edit,1350631552
Control22=IDC_EDIT_Y7,edit,1350631552
Control23=IDC_EDIT_Z7,edit,1350631552
Control24=IDC_EDIT_X8,edit,1350631552
Control25=IDC_EDIT_Y8,edit,1350631552
Control26=IDC_EDIT_Z8,edit,1350631552
Control27=IDC_EDIT_X9,edit,1350631552
Control28=IDC_EDIT_Y9,edit,1350631552
Control29=IDC_EDIT_Z9,edit,1350631552
Control30=IDC_STATIC_RECEPTOR1,static,1342308352
Control31=IDC_STATIC_COORX,static,1342308352
Control32=IDC_STATIC_COORY,static,1342308352
Control33=IDC_STATIC,static,1342308352
Control34=IDC_STATIC_RECEPTOR2,static,1342308352
Control35=IDC_STATIC_RECEPTOR3,static,1342308352
Control36=IDC_STATIC_RECEPTOR4,static,1342308352
Control37=IDC_STATIC_RECEPTOR5,static,1342308352
Control38=IDC_STATIC_RECEPTOR6,static,1342308352
Control39=IDC_STATIC_RECEPTOR7,static,1342308352
Control40=IDC_STATIC_RECEPTOR8,static,1342308352
Control41=IDC_STATIC_RECEPTOR9,static,1342308352
Control42=IDC_EDIT_X10,edit,1350631552
Control43=IDC_EDIT_Y10,edit,1350631552
Control44=IDC_EDIT_Z10,edit,1350631552
Control45=IDC_STATIC_RECEPTOR10,static,1342308352

[CLS:Creceptor]
Type=0
HeaderFile=receptor.h
ImplementationFile=receptor.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT_Z8
VirtualFilter=dWC

[DLG:IDD_STACK1_DIALOG]
Type=1
Class=Cstack1
ControlCount=40
Control1=IDC_EDIT_TS1,edit,1350631552
Control2=IDC_EDIT_DS1,edit,1350631552
Control3=IDC_EDIT_VS1,edit,1350631552
Control4=IDC_EDIT_Q1,edit,1350631552
Control5=IDC_EDIT_STACK1,edit,1350631552
Control6=IDC_EDIT_DECAY1,edit,1350631552
Control7=IDC_CHECK_BUOYANCY1,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH1,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION1,button,1342242819
Control10=IDC_RADIO_BRIGGS1,button,1342308361
Control11=IDC_RADIO_SCHULMAN1,button,1342177289
Control12=IDC_EDIT_STACKX1,edit,1350631552
Control13=IDC_EDIT_STACKY1,edit,1350631552
Control14=IDC_EDIT_STACKZ1,edit,1350631552
Control15=IDC_EDIT_HB1,edit,1350631552
Control16=IDC_EDIT_HW1,edit,1350631552
Control17=IDC_EDIT_PP1,edit,1350631552
Control18=IDC_EDIT_DP1,edit,1350631552
Control19=IDC_EDIT_WET1,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP1,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER1,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY1,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC1,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT1,static,1342308352
Control27=IDC_STATIC_STACKCOORX1,static,1342308352
Control28=IDC_STATIC_STACKCOORY1,static,1342308352
Control29=IDC_STATIC_STACKCOORZ1,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT1,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH1,static,1342308352
Control32=IDC_STATIC_DECAY1,static,1342308352
Control33=IDC_DEPOSITION1,button,1342242819
Control34=IDC_STATIC_PP1,static,1342308352
Control35=IDC_STATIC_DP1,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack1]
Type=0
HeaderFile=stack1.h
ImplementationFile=stack1.cpp
BaseClass=CDialog
Filter=D
LastObject=Cstack1
VirtualFilter=dWC

[DLG:IDD_STACK2_DIALOG]
Type=1
Class=Cstack2
ControlCount=40
Control1=IDC_EDIT_TS2,edit,1350631552
Control2=IDC_EDIT_DS2,edit,1350631552
Control3=IDC_EDIT_VS2,edit,1350631552
Control4=IDC_EDIT_Q2,edit,1350631552
Control5=IDC_EDIT_STACK2,edit,1350631552
Control6=IDC_EDIT_DECAY2,edit,1350631552
Control7=IDC_CHECK_BUOYANCY2,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH2,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION2,button,1342242819
Control10=IDC_RADIO_BRIGGS2,button,1342308361
Control11=IDC_RADIO_SCHULMAN2,button,1342177289
Control12=IDC_EDIT_STACKX2,edit,1350631552
Control13=IDC_EDIT_STACKY2,edit,1350631552
Control14=IDC_EDIT_STACKZ2,edit,1350631552
Control15=IDC_EDIT_HB2,edit,1350631552
Control16=IDC_EDIT_HW2,edit,1350631552
Control17=IDC_EDIT_PP2,edit,1350631552
Control18=IDC_EDIT_DP2,edit,1350631552
Control19=IDC_EDIT_WET1,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP2,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER2,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY2,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC2,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT2,static,1342308352
Control27=IDC_STATIC_STACKCOORX2,static,1342308352
Control28=IDC_STATIC_STACKCOORY2,static,1342308352
Control29=IDC_STATIC_STACKCOORZ2,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT2,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH2,static,1342308352
Control32=IDC_STATIC_DECAY2,static,1342308352
Control33=IDC_DEPOSITION2,button,1342242819
Control34=IDC_STATIC_PP2,static,1342308352
Control35=IDC_STATIC_DP2,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack2]
Type=0
HeaderFile=stack2.h
ImplementationFile=stack2.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=Cstack2

[DLG:IDD_STACK3_DIALOG]
Type=1
Class=Cstack3
ControlCount=40
Control1=IDC_EDIT_TS3,edit,1350631552
Control2=IDC_EDIT_DS3,edit,1350631552
Control3=IDC_EDIT_VS3,edit,1350631552
Control4=IDC_EDIT_Q3,edit,1350631552
Control5=IDC_EDIT_STACK3,edit,1350631552
Control6=IDC_EDIT_DECAY3,edit,1350631552
Control7=IDC_CHECK_BUOYANCY3,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH3,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION3,button,1342242819
Control10=IDC_RADIO_BRIGGS3,button,1342308361
Control11=IDC_RADIO_SCHULMAN3,button,1342177289
Control12=IDC_EDIT_STACKX3,edit,1350631552
Control13=IDC_EDIT_STACKY3,edit,1350631552
Control14=IDC_EDIT_STACKZ3,edit,1350631552
Control15=IDC_EDIT_HB3,edit,1350631552
Control16=IDC_EDIT_HW3,edit,1350631552
Control17=IDC_EDIT_PP3,edit,1350631552
Control18=IDC_EDIT_DP3,edit,1350631552
Control19=IDC_EDIT_WET1,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP3,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER3,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY3,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC3,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT3,static,1342308352
Control27=IDC_STATIC_STACKCOORX3,static,1342308352
Control28=IDC_STATIC_STACKCOORY3,static,1342308352
Control29=IDC_STATIC_STACKCOORZ3,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT3,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH3,static,1342308352
Control32=IDC_STATIC_DECAY3,static,1342308352
Control33=IDC_DEPOSITION3,button,1342242819
Control34=IDC_STATIC_PP3,static,1342308352
Control35=IDC_STATIC_DP3,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack3]
Type=0
HeaderFile=stack3.h
ImplementationFile=stack3.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_DATA_DIALOG]
Type=1
Class=Cdata
ControlCount=28
Control1=IDC_CHECK_TIPDOWNWASH,button,1342242819
Control2=IDC_CHECK_RURALURBAN,button,1342242819
Control3=IDC_EDIT_PA,edit,1350631552
Control4=IDC_EDIT_TA,edit,1350631552
Control5=IDC_EDIT_US,edit,1350631552
Control6=IDC_EDIT_DIRECTION,edit,1350631552
Control7=IDC_EDIT_TIME,edit,1350631552
Control8=IDC_EDIT_MIX,edit,1350631552
Control9=IDC_EDIT_WINDHEIGHT,edit,1350631552
Control10=IDC_RADIO_A,button,1342308361
Control11=IDC_RADIO_C,button,1342177289
Control12=IDC_RADIO_E,button,1342177289
Control13=IDC_RADIO_B,button,1342177289
Control14=IDC_RADIO_D,button,1342177289
Control15=IDC_RADIO_F,button,1342177289
Control16=IDC_EDIT_PRATE,edit,1350631552
Control17=IDOK,button,1342242817
Control18=IDCANCEL,button,1342242816
Control19=IDC_STATIC_PA,static,1342308352
Control20=IDC_STATIC_TA,static,1342308352
Control21=IDC_STATIC_US,static,1342308352
Control22=IDC_STATIC_WINDHEIGHT,static,1342308352
Control23=IDC_STATIC_WINDDIRECTION,static,1342308352
Control24=IDC_STATIC_STABILITY,static,1342308352
Control25=IDC_STATIC_MIX,static,1342308352
Control26=IDC_STATIC_TIME,static,1342308352
Control27=IDC_STATIC_PRATE,static,1342308352
Control28=IDC_STATIC,static,1342308364

[CLS:Cdata]
Type=0
HeaderFile=data.h
ImplementationFile=data.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_RADIO_A

[DLG:IDD_STACK4_DIALOG]
Type=1
Class=Cstack4
ControlCount=40
Control1=IDC_EDIT_TS4,edit,1350631552
Control2=IDC_EDIT_DS4,edit,1350631552
Control3=IDC_EDIT_VS4,edit,1350631552
Control4=IDC_EDIT_Q4,edit,1350631552
Control5=IDC_EDIT_STACK4,edit,1350631552
Control6=IDC_EDIT_DECAY4,edit,1350631552
Control7=IDC_CHECK_BUOYANCY4,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH4,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION4,button,1342242819
Control10=IDC_RADIO_BRIGGS4,button,1342308361
Control11=IDC_RADIO_SCHULMAN3,button,1342177289
Control12=IDC_EDIT_STACKX4,edit,1350631552
Control13=IDC_EDIT_STACKY4,edit,1350631552
Control14=IDC_EDIT_STACKZ4,edit,1350631552
Control15=IDC_EDIT_HB4,edit,1350631552
Control16=IDC_EDIT_HW3,edit,1350631552
Control17=IDC_EDIT_PP4,edit,1350631552
Control18=IDC_EDIT_DP4,edit,1350631552
Control19=IDC_EDIT_WET1,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP4,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER4,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY4,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC4,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT4,static,1342308352
Control27=IDC_STATIC_STACKCOORX4,static,1342308352
Control28=IDC_STATIC_STACKCOORY4,static,1342308352
Control29=IDC_STATIC_STACKCOORZ4,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT4,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH4,static,1342308352
Control32=IDC_STATIC_DECAY4,static,1342308352
Control33=IDC_DEPOSITION4,button,1342242819
Control34=IDC_STATIC_PP4,static,1342308352
Control35=IDC_STATIC_DP4,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack4]
Type=0
HeaderFile=stack4.h
ImplementationFile=stack4.cpp
BaseClass=CDialog
Filter=D
LastObject=Cstack4
VirtualFilter=dWC

[DLG:IDD_STACK5_DIALOG]
Type=1
Class=Cstack5
ControlCount=40
Control1=IDC_EDIT_TS5,edit,1350631552
Control2=IDC_EDIT_DS5,edit,1350631552
Control3=IDC_EDIT_VS5,edit,1350631552
Control4=IDC_EDIT_Q5,edit,1350631552
Control5=IDC_EDIT_STACK5,edit,1350631552
Control6=IDC_EDIT_DECAY5,edit,1350631552
Control7=IDC_CHECK_BUOYANCY5,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH5,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION5,button,1342242819
Control10=IDC_RADIO_BRIGGS5,button,1342308361
Control11=IDC_RADIO_SCHULMAN5,button,1342177289
Control12=IDC_EDIT_STACKX5,edit,1350631552
Control13=IDC_EDIT_STACKY5,edit,1350631552
Control14=IDC_EDIT_STACKZ5,edit,1350631552
Control15=IDC_EDIT_HB5,edit,1350631552
Control16=IDC_EDIT_HW5,edit,1350631552
Control17=IDC_EDIT_PP5,edit,1350631552
Control18=IDC_EDIT_DP5,edit,1350631552
Control19=IDC_EDIT_WET5,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP5,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER5,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY5,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC5,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT5,static,1342308352
Control27=IDC_STATIC_STACKCOORX5,static,1342308352
Control28=IDC_STATIC_STACKCOORY5,static,1342308352
Control29=IDC_STATIC_STACKCOORZ5,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT5,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH5,static,1342308352
Control32=IDC_STATIC_DECAY5,static,1342308352
Control33=IDC_DEPOSITION5,button,1342242819
Control34=IDC_STATIC_PP5,static,1342308352
Control35=IDC_STATIC_DP5,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack5]
Type=0
HeaderFile=stack5.h
ImplementationFile=stack5.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=Cstack5

[DLG:IDD_STACK6_DIALOG]
Type=1
Class=Cstack6
ControlCount=40
Control1=IDC_EDIT_TS6,edit,1350631552
Control2=IDC_EDIT_DS6,edit,1350631552
Control3=IDC_EDIT_VS6,edit,1350631552
Control4=IDC_EDIT_Q6,edit,1350631552
Control5=IDC_EDIT_STACK6,edit,1350631552
Control6=IDC_EDIT_DECAY6,edit,1350631552
Control7=IDC_CHECK_BUOYANCY6,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH6,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION6,button,1342242819
Control10=IDC_RADIO_BRIGGS6,button,1342308361
Control11=IDC_RADIO_SCHULMAN6,button,1342177289
Control12=IDC_EDIT_STACKX6,edit,1350631552
Control13=IDC_EDIT_STACKY6,edit,1350631552
Control14=IDC_EDIT_STACKZ6,edit,1350631552
Control15=IDC_EDIT_HB6,edit,1350631552
Control16=IDC_EDIT_HW6,edit,1350631552
Control17=IDC_EDIT_PP6,edit,1350631552
Control18=IDC_EDIT_DP6,edit,1350631552
Control19=IDC_EDIT_WET6,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP6,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER6,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY6,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC6,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT6,static,1342308352
Control27=IDC_STATIC_STACKCOORX6,static,1342308352
Control28=IDC_STATIC_STACKCOORY6,static,1342308352
Control29=IDC_STATIC_STACKCOORZ6,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT6,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH6,static,1342308352
Control32=IDC_STATIC_DECAY6,static,1342308352
Control33=IDC_DEPOSITION6,button,1342242819
Control34=IDC_STATIC_PP6,static,1342308352
Control35=IDC_STATIC_DP6,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack6]
Type=0
HeaderFile=stack6.h
ImplementationFile=stack6.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_STACK7_DIALOG]
Type=1
Class=Cstack7
ControlCount=40
Control1=IDC_EDIT_TS7,edit,1350631552
Control2=IDC_EDIT_DS7,edit,1350631552
Control3=IDC_EDIT_VS7,edit,1350631552
Control4=IDC_EDIT_Q7,edit,1350631552
Control5=IDC_EDIT_STACK7,edit,1350631552
Control6=IDC_EDIT_DECAY7,edit,1350631552
Control7=IDC_CHECK_BUOYANCY7,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH7,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION7,button,1342242819
Control10=IDC_RADIO_BRIGGS7,button,1342308361
Control11=IDC_RADIO_SCHULMAN7,button,1342177289
Control12=IDC_EDIT_STACKX7,edit,1350631552
Control13=IDC_EDIT_STACKY7,edit,1350631552
Control14=IDC_EDIT_STACKZ7,edit,1350631552
Control15=IDC_EDIT_HB7,edit,1350631552
Control16=IDC_EDIT_HW7,edit,1350631552
Control17=IDC_EDIT_PP7,edit,1350631552
Control18=IDC_EDIT_DP7,edit,1350631552
Control19=IDC_EDIT_WET7,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP7,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER7,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY7,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC7,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT7,static,1342308352
Control27=IDC_STATIC_STACKCOORX7,static,1342308352
Control28=IDC_STATIC_STACKCOORY7,static,1342308352
Control29=IDC_STATIC_STACKCOORZ7,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT7,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH7,static,1342308352
Control32=IDC_STATIC_DECAY7,static,1342308352
Control33=IDC_DEPOSITION7,button,1342242819
Control34=IDC_STATIC_PP7,static,1342308352
Control35=IDC_STATIC_DP7,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack7]
Type=0
HeaderFile=stack7.h
ImplementationFile=stack7.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=Cstack7

[DLG:IDD_STACK8_DIALOG]
Type=1
Class=Cstack8
ControlCount=40
Control1=IDC_EDIT_TS8,edit,1350631552
Control2=IDC_EDIT_DS8,edit,1350631552
Control3=IDC_EDIT_VS8,edit,1350631552
Control4=IDC_EDIT_Q8,edit,1350631552
Control5=IDC_EDIT_STACK8,edit,1350631552
Control6=IDC_EDIT_DECAY8,edit,1350631552
Control7=IDC_CHECK_BUOYANCY8,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH8,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION8,button,1342242819
Control10=IDC_RADIO_BRIGGS8,button,1342308361
Control11=IDC_RADIO_SCHULMAN8,button,1342177289
Control12=IDC_EDIT_STACKX8,edit,1350631552
Control13=IDC_EDIT_STACKY8,edit,1350631552
Control14=IDC_EDIT_STACKZ8,edit,1350631552
Control15=IDC_EDIT_HB8,edit,1350631552
Control16=IDC_EDIT_HW8,edit,1350631552
Control17=IDC_EDIT_PP8,edit,1350631552
Control18=IDC_EDIT_DP8,edit,1350631552
Control19=IDC_EDIT_WET8,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP8,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER8,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY8,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC8,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT8,static,1342308352
Control27=IDC_STATIC_STACKCOORX8,static,1342308352
Control28=IDC_STATIC_STACKCOORY8,static,1342308352
Control29=IDC_STATIC_STACKCOORZ8,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT8,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH8,static,1342308352
Control32=IDC_STATIC_DECAY8,static,1342308352
Control33=IDC_DEPOSITION8,button,1342242819
Control34=IDC_STATIC_PP8,static,1342308352
Control35=IDC_STATIC_DP8,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack8]
Type=0
HeaderFile=stack8.h
ImplementationFile=stack8.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_STACK9_DIALOG]
Type=1
Class=Cstack9
ControlCount=40
Control1=IDC_EDIT_TS9,edit,1350631552
Control2=IDC_EDIT_DS9,edit,1350631552
Control3=IDC_EDIT_VS9,edit,1350631552
Control4=IDC_EDIT_Q9,edit,1350631552
Control5=IDC_EDIT_STACK9,edit,1350631552
Control6=IDC_EDIT_DECAY9,edit,1350631552
Control7=IDC_CHECK_BUOYANCY9,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH9,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION9,button,1342242819
Control10=IDC_RADIO_BRIGGS9,button,1342308361
Control11=IDC_RADIO_SCHULMAN9,button,1342177289
Control12=IDC_EDIT_STACKX9,edit,1350631552
Control13=IDC_EDIT_STACKY9,edit,1350631552
Control14=IDC_EDIT_STACKZ9,edit,1350631552
Control15=IDC_EDIT_HB9,edit,1350631552
Control16=IDC_EDIT_HW9,edit,1350631552
Control17=IDC_EDIT_PP9,edit,1350631552
Control18=IDC_EDIT_DP9,edit,1350631552
Control19=IDC_EDIT_WET9,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP9,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER9,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY9,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC9,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT9,static,1342308352
Control27=IDC_STATIC_STACKCOORX9,static,1342308352
Control28=IDC_STATIC_STACKCOORY9,static,1342308352
Control29=IDC_STATIC_STACKCOORZ9,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT9,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH9,static,1342308352
Control32=IDC_STATIC_DECAY9,static,1342308352
Control33=IDC_DEPOSITION9,button,1342242819
Control34=IDC_STATIC_PP9,static,1342308352
Control35=IDC_STATIC_DP9,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack9]
Type=0
HeaderFile=stack9.h
ImplementationFile=stack9.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT_STACK9

[DLG:IDD_STACK10_DIALOG]
Type=1
Class=Cstack10
ControlCount=40
Control1=IDC_EDIT_TS10,edit,1350631552
Control2=IDC_EDIT_DS10,edit,1350631552
Control3=IDC_EDIT_VS10,edit,1350631552
Control4=IDC_EDIT_Q10,edit,1350631552
Control5=IDC_EDIT_STACK10,edit,1350631552
Control6=IDC_EDIT_DECAY10,edit,1350631552
Control7=IDC_CHECK_BUOYANCY10,button,1342242819
Control8=IDC_CHECK_BUILDINGDOWNWASH10,button,1342242819
Control9=IDC_CHECK_BUILDINGLOCATION10,button,1342242819
Control10=IDC_RADIO_BRIGGS10,button,1342308361
Control11=IDC_RADIO_SCHULMAN10,button,1342177289
Control12=IDC_EDIT_STACKX10,edit,1350631552
Control13=IDC_EDIT_STACKY10,edit,1350631552
Control14=IDC_EDIT_STACKZ10,edit,1350631552
Control15=IDC_EDIT_HB10,edit,1350631552
Control16=IDC_EDIT_HW10,edit,1350631552
Control17=IDC_EDIT_PP10,edit,1350631552
Control18=IDC_EDIT_DP10,edit,1350631552
Control19=IDC_EDIT_WET10,edit,1350631552
Control20=IDOK,button,1342242817
Control21=IDCANCEL,button,1342242816
Control22=IDC_STATIC_STACKTEMP10,static,1342308352
Control23=IDC_STATIC_INNERDIAMETER10,static,1342308352
Control24=IDC_STATIC_STACKVELOCITY10,static,1342308352
Control25=IDC_STATIC_VOLUMETRIC10,static,1342308352
Control26=IDC_STATIC_STACKHEIGHT10,static,1342308352
Control27=IDC_STATIC_STACKCOORX10,static,1342308352
Control28=IDC_STATIC_STACKCOORY10,static,1342308352
Control29=IDC_STATIC_STACKCOORZ10,static,1342308352
Control30=IDC_STATIC_BUILDINGHEIGHT10,static,1342308352
Control31=IDC_STATIC_BUILDINGWIDTH10,static,1342308352
Control32=IDC_STATIC_DECAY10,static,1342308352
Control33=IDC_DEPOSITION10,button,1342242819
Control34=IDC_STATIC_PP10,static,1342308352
Control35=IDC_STATIC_DP10,static,1342308352
Control36=IDC_STATIC_WET1,static,1342308352
Control37=IDC_STATIC_WET,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352

[CLS:Cstack10]
Type=0
HeaderFile=stack10.h
ImplementationFile=stack10.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=Cstack10

[DLG:IDD_GRID_DIALOG]
Type=1
Class=Cgrid
ControlCount=22
Control1=IDC_EDIT_RLENGTH,edit,1350631552
Control2=IDC_EDIT_RAMOUNT,edit,1350631552
Control3=IDC_EDIT_RRING,edit,1350631552
Control4=IDC_EDIT_RELEVATION,edit,1350631552
Control5=IDC_EDIT_MINX,edit,1350631552
Control6=IDC_EDIT_MAXX,edit,1350631552
Control7=IDC_EDIT_MINY,edit,1350631552
Control8=IDC_EDIT_MAXY,edit,1350631552
Control9=IDC_EDIT_BETWEEN,edit,1350631552
Control10=IDOK,button,1342242817
Control11=IDCANCEL,button,1342242816
Control12=IDC_STATIC_RLENGTH,static,1342308352
Control13=IDC_STATIC_RAMOUNT,static,1342308352
Control14=IDC_STATIC_RRING,static,1342308352
Control15=IDC_STATIC_RELEVATION,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352

[CLS:Cgrid]
Type=0
HeaderFile=grid.h
ImplementationFile=grid.cpp
BaseClass=CDialog
Filter=D
LastObject=Cgrid
VirtualFilter=dWC

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_DRAWGRAPH_DRAWGRAPH
Command2=ID_EDIT_COPY
Command3=ID_SAVEASTEXTFILE_SAVEASTEXTFILE
Command4=ID_DRAWPIEGRAPH_DRAWPIEGRAPH
Command5=ID_CALCULATE_CALCULATE
Command6=ID_SAVEASMFILE_SAVEASMFILE
Command7=ID_FILE_NEW
Command8=ID_FILE_OPEN
Command9=ID_FILE_PRINT
Command10=ID_FILE_SAVE
Command11=ID_DRAWTIMEDEPENDENTGRAPH_DRAWTIMEDEPENDENTGRAPH
Command12=ID_EDIT_PASTE
Command13=ID_EDIT_CUT
Command14=ID_EDIT_UNDO
CommandCount=14
