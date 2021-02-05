#include "Ringliste.h"
#include <string>

Ringliste::Ringliste() {
	data.resize(10);
}

Ringliste::Ringliste(int a) {
	data.resize(a);
}

Ringliste::~Ringliste() {

}

std::string Ringliste::toString() const{
	std::string str;
	for (int i : data) {
		str += i + " ";
	}
}

Ringliste& Ringliste::operator<< (int a) {
	data.insert(data.begin() + writePos, a);
	writePos++;
	if (writePos > data.size) writePos = 0;
}

bool Ringliste::operator ==(const Ringliste& r) const {
	int cnt = 0;
	for (int v : r.data) {
		for (int w : data) {
			if (v == w) cnt++;
		}

	}
	if (cnt == r.data.size) return true;
	else { return false; }
}