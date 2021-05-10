// #include <windows.h>
#include <WinInet.h>        //#include <windows.h>보다 이후에 선언되어야 한다.
#pragma comment (lib, "wininet.lib")
#define IP "210.124.110.197"
#define PHP "/war/pwnbit/pwnbit1.php"

//전역 변수 선언

HINTERNET hInternet, hHttp;
HINTERNET hReq;

//전역 변수 선언 끝
//웹 페이지 접속함수 선언

hInternet = InternetOpen("HttpTest", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
if(hInternet == NULL) return -1;

hHttp = InternetConnect(hInternet,IP, 0, "", "", INTERNET_SERVICE_HTTP, 0, 0);
if(hHttp == NULL) return -1;

hReq = HttpOpenRequest(hHttp, "GET", PHP, NULL, NULL, NULL, 0, 0);
HttpSendRequest(hReq, NULL, 0, NULL, 0);

InternetCloseHandle(hHttp);
InternetCloseHandle(hInternet);
//웹 페이지 접속함수 선언 끝