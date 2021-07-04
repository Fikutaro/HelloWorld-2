// HelloWorld 2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;

class Rocket
{
	int nenryo;
	int sokudo;
public:
	Rocket(int x);
	void kasoku();
};

Rocket::Rocket(int x) :nenryo(x), sokudo(0) {}

void Rocket::kasoku()
{
	if (nenryo >= 2) {
		sokudo += 2;
		nenryo -= 2;
		cout << "現在の燃料は" << nenryo << "です" << endl;
		cout << "現在の速度は" << sokudo << "です" << endl;
	}
	else {
		cout << "燃料切れです" << endl;
	}
}

int main()
{
	cout << "ロケットを作ります。燃料を入力" << endl;
	int n;
	cin >> n;
	Rocket ohtori(n);
	cout << "加速します" << endl;
	ohtori.kasoku();
	cout << "また、加速します。" << endl;
	ohtori.kasoku();
	cout << "またまた、加速してみます。" << endl;
	ohtori.kasoku();
	cout << "鳳号の冒険は終わったんだ。" << endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
