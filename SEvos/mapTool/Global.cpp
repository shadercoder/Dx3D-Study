
#include "stdafx.h"
#include "global.h"


ns_script::CScript g_Scr;

int g_CurTime = 0;		// ���� �ð� (millisecond���� timeGetTime() ��)
int g_DeltaTime = 0;	// �������ӿ��� ��� �ð�

D3DXMATRIXA16	g_matIdentity;


int g_test = 0;

Vector3 g_DefaultCameraPos( 0.0f, 100.f, -80.f );

//CTerrainPanel *g_pTerrainPanel;
CMapView *g_pTerrainView = NULL;
RECT g_ViewPort;
CBasePanelFrame *g_pBasePanelFrm = NULL;
CTilePanel *g_pTilePanel = NULL;
