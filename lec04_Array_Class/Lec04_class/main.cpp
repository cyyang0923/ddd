#include "Complex.h"
#include "Car.h"
#include "SportCar.h"
#include "Music.h"

int main()
{
	//music streaming service 를 생성
	musicstreamingservice my_service("spotify");
	my_service.addMusic("PolaroidLove", "bts", "dd", 2022);
	my_service.addMusic("ditto", "nj", "album", 2023);

	//유저 추가 기능
	// 뮤직 객체 선언--> 사용자 입력 받기 (cin) 
	// 입력 받은 값을 선언한 뮤직 객체 하나씩 채우기 
	// 마지막으로 뮤직 객체 my_sevice 의 music_list에 push_back()

	//서치 기능 추가
	string music_title;
	cout << "Enter the music title: ";
	cin >> music_title;
	Music* result = my_service.searchBytitle(music_title);
	if (resuit !- NULL) {
		cout << "Found: " << resuit->getTitle() << "by" << result->getArtist() << endl;
	}
	else {
		cout << "not found" << endl;

	}

	//searcj music by artist
	string artist_name;
	cout << "Enter artist name";
	cin >> artist_name;
	vector<Music*> artist_result = my_service.searchByArtist(artist_name);

}
 

int main(){
	Complex a, b, c;
	a.read("A = ");
	a.print("A = ");

	Car myCar;
	Car momscar(10, "K5", 2);
	SportCar mySecondCar(100, "Tytan", 3);

	myCar.whereAmI();
	momscar.whereAmI();
	myCar .changeGear(3);
	momscar.speedUp();
	momscar.display();

	mySecondCar.setTurbo(true);
	mySecondCar.bTurbo(true);
}
