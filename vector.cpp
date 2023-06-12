#include<bits/stdc++.h>

using namespace std;
// vector<kieu du lieu> ten_vector

//push_back(): them vao cuoi vector
//size(): kich thuoc vector
//truy cap cac phan tu trong vect? thong qua chi so
//duyet thong qua index
//duyet thong qua foreach
//duyet thong qua iterator
main(){
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);

//	cout << v.size() << endl;
//	v.push_back(40);
//	cout << v.size() << endl;
//	cout << "Phan tu dau tien trong vector: " << v[0] << endl;
//	cout << "Phan tu cuoi cung trong vector: " << v[v.size() - 1] << endl;
//	cout << "Phan tu cuoi cung trong vector: " << v.back() << endl;

//	for(int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}

//	for(int x : v)
//	{
//		cout << x << endl;
//	}

//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << endl;
//	}

//	for(auto it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << endl;
//	}

//	int n; cin >> n;
//	vector<int> v(n);  // khai bao vector da cos san n phan tu v[n]
//	for(int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	for(int x : v)
//	{
//		cout << x << endl;
//	}

//	vector<string> v;
//	v.push_back("lap trinh");
//	v.push_back("DSA");
//	for(int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}

	string str = " ngon ngu   lap trinh java";
	stringstream ss(str);
	string tmp;
	vector<string> v;
	while(ss >> tmp)
	{
		v.push_back(tmp);
	}
	for(string x : v)
	{
		cout << x << endl;
	}

	return 0;
}
