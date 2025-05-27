#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "JoinUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "QuitUI.h"
#include "AddBikeUI.h"
#include "RentBikeUI.h"
#include "RentedBikeInfoUI.h"

#include "UserList.h"
#include "LoggedInUser.h"
#include "BikeList.h"
#include "Member.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask(ifstream& in, ofstream& out) {
    
    UserList userList;
    LoggedInUser loggedInUser;
    BikeList bikeList;
    Member member;

    int menu1 = 0, menu2 = 0;
    bool is_program_exit = false;

    while (!is_program_exit) {
        in >> menu1 >> menu2;

        switch (menu1) {
        case 1:
            if (menu2 == 1) { // 회원가입
                Join join(&userList);
                JoinUI joinUI(&join);
                joinUI.signUp(in, out);
            }
            break;

        case 2:
            if (menu2 == 1) { // 로그인
                Login login(&loggedInUser);
                LoginUI loginUI(&login);
                loginUI.signIn(in, out);
            }
            else if (menu2 == 2) { // 로그아웃
                Logout logout(&loggedInUser);
                LogoutUI logoutUI(&logout);
                logoutUI.selectLogout(in, out);
            }
            break;

        case 3:
            if (menu2 == 1) { // 자전거 등록
                AddBike addBike(&bikeList);
                AddBikeUI addBikeUI(&addBike);
                addBikeUI.registerBike(in, out);
            }
            break;

        case 4:
            if (menu2 == 1) { // 자전거 대여
                RentBike rentBike(&member, &bikeList);
                RentBikeUI rentBikeUI(&rentBike);
                rentBikeUI.chooseBike(in, out);
            }
            break;

        case 5:
            if (menu2 == 1) { // 대여 정보 조회
                RentedBikeInfo rentedBikeinfo(&member);
                RentedBikeInfoUI rentedBikeinfoUI(&rentedBikeinfo);
                rentedBikeinfoUI.selectRentBikeInfo(in, out);
            }
            break;
        
        case 6:
            if (menu2 == 1) { // 종료
                Quit quit;
                QuitUI quitUI(&quit);
                quitUI.selectQuit(in, out);
                is_program_exit = true;
            }
            break;
        } 
    }
}

int main()
{
	ifstream in_fp;
	ofstream out_fp;

	in_fp.open(INPUT_FILE_NAME); // input file 열기
	out_fp.open(OUTPUT_FILE_NAME); // output file 열기

    doTask(in_fp, out_fp); // 프로그램 실행

	out_fp.close(); // output file 닫기
	in_fp.close(); // input file 닫기

	return 0;
}
