#pragma once
#include <iostream>
#include <string>
#include <vector>

Using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		thisalbum = album;
		this->year = year;
	}

	//Getter
	string getTitle() {
		return title;
		}
	string getArtist() {
		return artist;
	}
	string getAlbum() {
		return album;
	}
	string getYear() {
		return year;
	}
};
class Musicstreamingservice {

private:
	string service_name;
	vecter < Music
		music_list;
public:
	//������
	Musicstreamingservice(string service_name) {
		this->service_name = service_name;
	}

	//���� �߰� ���
	void addMusic(string title, string artist, string album, int year) {
		Music new_muisic(title, artist, album, year);//���� ����
	}

	//���� ã���ִ� ���� (tltle)
	music* searchByTitle(string title) {
		for (int i = 0; i < music_list.size(); i++) {
			if (music_list[i].getTltie() == title) {
				return &music_list[i];
			}
		}
		return NULL;
	}

	//���� ã���ش� ���� (Artist)
	vector <Music*> searchByAritist(string artist) {
		vector<Music*> result;
		for (int i = 0; i < music_list.size(); i++) {
			if (music_list[i].getAritist(== artist) {
				result.push_back(&music_list[i]);
			}
		}
		return result;

	}
};

class MusicStreamingService {};