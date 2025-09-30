#include <iostream>
#include <string>

using namespace std;

int main()
{
	float hedef_aci, adim_acisi, donme_hizi;
	int adim_sayisi, sure;

	cout << "=== STEP MOTOE HESAPLAMA ===" << endl;
	cout << "Adım açısı (derece/adım): ";
	cin >> adim_acisi;

	cout << "Hedef Açı (derece): ";
	cin >> hedef_aci;

	cout << "Dönme Hızı (RPM): ";
	cin >> donme_hizi;

	adim_sayisi = static_cast<int>(hedef_aci / adim_acisi);		// static_cast

	float tam_tur_adim = 360.0 / adim_acisi;
	float saniye_aidm_hizi = (donme_hizi * tam_tur_adim) / 60.f;
	sure = (int)(adim_sayisi / saniye_aidm_hizi);

	cout << "=== SONUÇLAR ===" << endl;
	cout << "Gerekli adım sayısı: " << adim_sayisi << " adım" << endl;
	cout << "Gerekli süre: " << sure << " saniye" << endl;

	return (0);
}
