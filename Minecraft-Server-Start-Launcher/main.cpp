#include <iostream>
#include <Windows.h>
#include "ServerPosition.h"

const char* otwt_mod_forge = { "1.12.2-mod-forge" };
const char* onit_mod_fabric = { "1.19.2-mod-fabric" };
const char* otwo_gregtech = { "1.20.1-gregtech" };
const char* otwo_mod_fabric = { "1.20.1-mod-fabric" };
const char* otwo_origin = { "1.20.1-origin" };
const char* otwo_survival = { "1.20.1-survival" };
const char* otwf = { "1.20.4" };
const char* otwoo_origin = { "1.21.1-origin" };
const char* otwt = { "1.12.2" };
const char* onit = { "1.19.2" };
const char* otwo = { "1.20.1" };
const char* otwoo = { "1.21.1" };

using namespace std;

int main()
{
	int version = 0;
	int type = 0;
	//server_test();
	cout << "1	" << otwt << endl;
	cout << "2	" << onit << endl;
	cout << "3	" << otwo << endl;
	cout << "4	" << otwf << endl;
	cout << "5	" << otwoo << endl;
	cout << "请输入服务器版本" << endl;
	cin >> version;
	if (version == 1)
	{
		cout << "1	" << otwt_mod_forge << endl;
		cout << "请输入服务器类型" << endl;
		cin >> type;
		if (type == 1) {
			otwt_modforge_position();
		}
	}else {
		if (version == 2)
		{
			cout << "1	" << onit_mod_fabric << endl;
			cout << "请输入服务器类型" << endl;
			cin >> type;
			if (type == 1) {
				onit_modfabric_position();
			}
		}
		else {
			if (version == 3)
			{
				cout << "1	" << otwo_gregtech << endl;
				cout << "2	" << otwo_mod_fabric << endl;
				cout << "3	" << otwo_origin << endl;
				cout << "4	" << otwo_survival << endl;
				cout << "请输入服务器类型" << endl;
				cin >> type;
				if (type == 1)
				{
					otwo_gregtech_position();
				}
				else {
					if (type == 2)
					{
						otwo_modfabric_position();
					}
					else {
						if (type == 3)
						{
							otwo_origin_position();
						}
						else {
							if (type == 4)
							{
								otwo_survival_position();
							}
						}
					}
				}
			}
			else {
				if (version == 4)
				{
					cout << "1	" << otwf << endl;
					cout << "请输入服务器类型" << endl;
					cin >> type;
					if (type == 1)
					{
						otwf_position();
					}
				}
				else {
					if (version == 5)
					{
						cout << "1	" << otwoo_origin << endl;
						cout << "请输入服务器类型" << endl;
						cin >> type;
						if (type == 1)
						{
							otwoo_origin_position();
						}
					}
				}
			}
		}
	}
	return 0;
}