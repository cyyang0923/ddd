#include "Complex.h"
#include "Car.h"
#include "SportCar.h"
#include "Music.h"

int main()
{
	//music streaming service �� ����
	musicstreamingservice my_service("spotify");
	my_service.addMusic("PolaroidLove", "bts", "dd", 2022);
	my_service.addMusic("ditto", "nj", "album", 2023);

	//���� �߰� ���
	// ���� ��ü ����--> ����� �Է� �ޱ� (cin) 
	// �Է� ���� ���� ������ ���� ��ü �ϳ��� ä��� 
	// ���������� ���� ��ü my_sevice �� music_list�� push_back()

	//��ġ ��� �߰�
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
