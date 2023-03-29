#include "LinkedList.hpp"

int main(){
	LinkedList<string> *isimler = new LinkedList<string>();
	int sec,konum;
	string isim;
	
	do{
		system("CLS");
		cout<<"1.Isim Ekle"<<endl;
		cout<<"2.Isim Sil"<<endl;
		cout<<"3. Konumdan Isim Sil"<<endl;
		cout<<"4.Konuma Isim Ekle"<<endl;
		cout<<"5.Konum Bul"<<endl;
		cout<<"6.Isim Sayisi"<<endl;
		cout<<"7.Ilk Isim"<<endl;
		cout<<"8.Son Isim"<<endl;
		cout<<"9.Isimleri Listele"<<endl;
		cout<<"10.Isimleri Temizle"<<endl;
		cout<<"11.Isim Ara"<<endl;
		cout<<"12.Cikis"<<endl;
		cout<<"Secim : ";
		cin>>sec;
		switch(sec){
			case 1:
				cout<<"Isim : ";
				cin.ignore();
				getline(cin,isim);
				isimler->add(isim);
			break;
			case 2:
				cout<<"Isim : ";
				cin.ignore();
				getline(cin,isim);
				isimler->remove(isim);
			break;
			case 3:
				cout<<"Konum : ";
				cin>>konum;
				isimler->removeAt(konum);
			break;
			case 4:
				cout<<"Konum : ";
				cin>>konum;
				cout<<"Isim : ";
				cin.ignore();
				getline(cin,isim);
				isimler->insert(konum,isim);
			break;
			case 5:
				cout<<"Isim : ";
				cin.ignore();
				getline(cin,isim);
				cout<<"Konum : "<<isimler->indexOf(isim)<<endl;
				cin.ignore();
				cin.get();
			break;
			case 6:
				cout<<"Isim sayisi : "<<isimler->size()<<endl;
				cin.ignore();
				cin.get();
			break;
			case 7:
				cout<<"Ilk isim : "<<isimler->first()<<endl;
				cin.ignore();
				cin.get();
			break;
			case 8:
				cout<<"Son isim : "<<isimler->last()<<endl;
				cin.ignore();
				cin.get();
			break;
			case 9:
				cout<<"Isimler : "<<endl;
				cout<<*isimler;
				cin.ignore();
				cin.get();
			break;
			case 10:
			isimler->clear();
			break;
			case 11:
				cout<<"Isim : ",
				cin.ignore();
				getline(cin,isim);
				if(isimler->find(isim)) cout<<"Isim Var."<<endl;
				else cout<<"Isim yok."<<endl;
				cin.ignore();
				cin.get();
			break;
			case 12:
			
			break;
			default:
				cout<<"Hatali Secim!!"<<endl;
				cin.ignore();
				cin.get();
			break;
		}
		
	}while(sec !=12);
	
	delete isimler;
	return 0;
}