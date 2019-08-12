#include <vector>
#include <algorithm>
#include <list>
#include <unordered_map>
#include <utility>
using namespace std;

class LRUCache {
	list<int> age;
	unordered_map<int, pair<int, list<int>::iterator>> data;
	int maxSize, cnt;
public:
    LRUCache(int capacity) {
		maxSize = capacity;
		cnt = 0;
    }
    
    int get(int key) {
		auto it = data.find(key);
		if (it != data.end()) {
			age.erase(it->second.second);
			age.push_front(key);
			it->second.second = age.begin();
			return it->second.first;
		}
		return -1;
    }
    
    void put(int key, int value) {
		if (get(key) != -1) {
			data[key].first = value;
			return;
		}
		if (cnt++ >= maxSize) {
			data.erase(age.back());
			age.pop_back();
			cnt --;
		}
		age.push_front(key);
		data[key] = make_pair(value, age.begin());
    }
};

