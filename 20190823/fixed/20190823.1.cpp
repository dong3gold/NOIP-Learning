#include <cstdio>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;
int g[2001] = {0,1,4,27,256,125,656,543,216,489,0,611,256,253,16,375,616,177,424,979,0,421,584,567,776,625,776,803,736,469,0,431,976,513,536,875,136,517,304,959,0,641,64,507,296,125,696,863,456,449,0,51,296,373,56,375,456,57,984,939,0,661,944,847,816,625,416,723,376,429,0,471,216,833,576,875,576,797,464,919,0,481,224,587,336,125,936,383,496,409,0,691,736,893,96,375,496,737,744,899,0,101,904,727,856,625,256,843,816,389,0,711,856,553,616,875,216,877,824,879,0,521,984,267,376,125,376,103,336,369,0,531,576,813,136,375,736,217,704,859,0,741,464,207,896,625,296,163,56,349,0,151,896,673,656,875,56,757,384,839,0,761,344,547,416,125,16,23,976,329,0,571,816,133,176,375,176,497,864,819,0,581,624,287,936,625,536,683,96,309,0,791,336,193,696,875,96,437,144,799,0,201,304,427,456,125,856,143,416,289,0,811,456,853,216,375,816,577,224,779,0,621,384,967,976,625,976,403,936,269,0,631,176,113,736,875,336,917,104,759,0,841,864,907,496,125,896,463,656,249,0,251,496,973,256,375,656,457,784,739,0,861,744,247,16,625,616,323,576,229,0,671,416,433,776,875,776,197,264,719,0,681,24,987,536,125,136,983,696,209,0,891,936,493,296,375,696,137,544,699,0,301,704,127,56,625,456,443,16,189,0,911,56,153,816,875,416,277,624,679,0,721,784,667,576,125,576,703,536,169,0,731,776,413,336,375,936,617,504,659,0,941,264,607,96,625,496,763,256,149,0,351,96,273,856,875,256,157,184,639,0,961,144,947,616,125,216,623,176,129,0,771,16,733,376,375,376,897,664,619,0,781,424,687,136,625,736,283,296,109,0,991,536,793,896,875,296,837,944,599,0,401,104,827,656,125,56,743,616,89,0,11,656,453,416,375,16,977,24,579,0,821,184,367,176,625,176,3,136,69,0,831,376,713,936,875,536,317,904,559,0,41,664,307,696,125,96,63,856,49,0,451,696,573,456,375,856,857,584,539,0,61,544,647,216,625,816,923,776,29,0,871,616,33,976,875,976,597,64,519,0,881,824,387,736,125,336,583,896,9,0,91,136,93,496,375,896,537,344,499,0,501,504,527,256,625,656,43,216,989,0,111,256,753,16,875,616,677,424,479,0,921,584,67,776,125,776,303,736,969,0,931,976,13,536,375,136,17,304,459,0,141,64,7,296,625,696,363,456,949,0,551,296,873,56,875,456,557,984,439,0,161,944,347,816,125,416,223,376,929,0,971,216,333,576,375,576,297,464,419,0,981,224,87,336,625,936,883,496,909,0,191,736,393,96,875,496,237,744,399,0,601,904,227,856,125,256,343,816,889,0,211,856,53,616,375,216,377,824,379,0,21,984,767,376,625,376,603,336,869,0,31,576,313,136,875,736,717,704,359,0,241,464,707,896,125,296,663,56,849,0,651,896,173,656,375,56,257,384,339,0,261,344,47,416,625,16,523,976,829,0,71,816,633,176,875,176,997,864,319,0,81,624,787,936,125,536,183,96,809,0,291,336,693,696,375,96,937,144,299,0,701,304,927,456,625,856,643,416,789,0,311,456,353,216,875,816,77,224,279,0,121,384,467,976,125,976,903,936,769,0,131,176,613,736,375,336,417,104,259,0,341,864,407,496,625,896,963,656,749,0,751,496,473,256,875,656,957,784,239,0,361,744,747,16,125,616,823,576,729,0,171,416,933,776,375,776,697,264,219,0,181,24,487,536,625,136,483,696,709,0,391,936,993,296,875,696,637,544,199,0,801,704,627,56,125,456,943,16,689,0,411,56,653,816,375,416,777,624,179,0,221,784,167,576,625,576,203,536,669,0,231,776,913,336,875,936,117,504,159,0,441,264,107,96,125,496,263,256,649,0,851,96,773,856,375,256,657,184,139,0,461,144,447,616,625,216,123,176,629,0,271,16,233,376,875,376,397,664,119,0,281,424,187,136,125,736,783,296,609,0,491,536,293,896,375,296,337,944,99,0,901,104,327,656,625,56,243,616,589,0,511,656,953,416,875,16,477,24,79,0,321,184,867,176,125,176,503,136,569,0,331,376,213,936,375,536,817,904,59,0,541,664,807,696,625,96,563,856,549,0,951,696,73,456,875,856,357,584,39,0,561,544,147,216,125,816,423,776,529,0,371,616,533,976,375,976,97,64,19,0,381,824,887,736,625,336,83,896,509,0,591,136,593,496,875,896,37,344,999,0,1,504,27,256,125,656,543,216,489,0,611,256,253,16,375,616,177,424,979,0,421,584,567,776,625,776,803,736,469,0,431,976,513,536,875,136,517,304,959,0,641,64,507,296,125,696,863,456,449,0,51,296,373,56,375,456,57,984,939,0,661,944,847,816,625,416,723,376,429,0,471,216,833,576,875,576,797,464,919,0,481,224,587,336,125,936,383,496,409,0,691,736,893,96,375,496,737,744,899,0,101,904,727,856,625,256,843,816,389,0,711,856,553,616,875,216,877,824,879,0,521,984,267,376,125,376,103,336,369,0,531,576,813,136,375,736,217,704,859,0,741,464,207,896,625,296,163,56,349,0,151,896,673,656,875,56,757,384,839,0,761,344,547,416,125,16,23,976,329,0,571,816,133,176,375,176,497,864,819,0,581,624,287,936,625,536,683,96,309,0,791,336,193,696,875,96,437,144,799,1,201,804,427,456,125,856,143,416,289,0,811,456,853,216,375,816,577,224,779,0,621,384,967,976,625,976,403,936,269,0,631,176,113,736,875,336,917,104,759,0,841,864,907,496,125,896,463,656,249,0,251,496,973,256,375,656,457,784,739,0,861,744,247,16,625,616,323,576,229,0,671,416,433,776,875,776,197,264,719,0,681,24,987,536,125,136,983,696,209,0,891,936,493,296,375,696,137,544,699,0,301,704,127,56,625,456,443,16,189,0,911,56,153,816,875,416,277,624,679,0,721,784,667,576,125,576,703,536,169,0,731,776,413,336,375,936,617,504,659,0,941,264,607,96,625,496,763,256,149,0,351,96,273,856,875,256,157,184,639,0,961,144,947,616,125,216,623,176,129,0,771,16,733,376,375,376,897,664,619,0,781,424,687,136,625,736,283,296,109,0,991,536,793,896,875,296,837,944,599,0,401,104,827,656,125,56,743,616,89,0,11,656,453,416,375,16,977,24,579,0,821,184,367,176,625,176,3,136,69,0,831,376,713,936,875,536,317,904,559,0,41,664,307,696,125,96,63,856,49,0,451,696,573,456,375,856,857,584,539,0,61,544,647,216,625,816,923,776,29,0,871,616,33,976,875,976,597,64,519,0,881,824,387,736,125,336,583,896,9,0,91,136,93,496,375,896,537,344,499,0,501,504,527,256,625,656,43,216,989,0,111,256,753,16,875,616,677,424,479,0,921,584,67,776,125,776,303,736,969,0,931,976,13,536,375,136,17,304,459,0,141,64,7,296,625,696,363,456,949,0,551,296,873,56,875,456,557,984,439,0,161,944,347,816,125,416,223,376,929,0,971,216,333,576,375,576,297,464,419,0,981,224,87,336,625,936,883,496,909,0,191,736,393,96,875,496,237,744,399,1,601,404,227,856,125,256,343,816,889,0,211,856,53,616,375,216,377,824,379,0,21,984,767,376,625,376,603,336,869,0,31,576,313,136,875,736,717,704,359,0,241,464,707,896,125,296,663,56,849,0,651,896,173,656,375,56,257,384,339,0,261,344,47,416,625,16,523,976,829,0,71,816,633,176,875,176,997,864,319,0,81,624,787,936,125,536,183,96,809,0,291,336,693,696,375,96,937,144,299,0,701,304,927,456,625,856,643,416,789,0,311,456,353,216,875,816,77,224,279,0,121,384,467,976,125,976,903,936,769,0,131,176,613,736,375,336,417,104,259,0,341,864,407,496,625,896,963,656,749,0,751,496,473,256,875,656,957,784,239,0,361,744,747,16,125,616,823,576,729,0,171,416,933,776,375,776,697,264,219,0,181,24,487,536,625,136,483,696,709,0,391,936,993,296,875,696,637,544,199,0,801,704,627,56,125,456,943,16,689,0,411,56,653,816,375,416,777,624,179,0,221,784,167,576,625,576,203,536,669,0,231,776,913,336,875,936,117,504,159,0,441,264,107,96,125,496,263,256,649,0,851,96,773,856,375,256,657,184,139,0,461,144,447,616,625,216,123,176,629,0,271,16,233,376,875,376,397,664,119,0,281,424,187,136,125,736,783,296,609,0,491,536,293,896,375,296,337,944,99,0,901,104,327,656,625,56,243,616,589,0,511,656,953,416,875,16,477,24,79,0,321,184,867,176,125,176,503,136,569,0,331,376,213,936,375,536,817,904,59,0,541,664,807,696,625,96,563,856,549,0,951,696,73,456,875,856,357,584,39,0,561,544,147,216,125,816,423,776,529,0,371,616,533,976,375,976,97,64,19,0,381,824,887,736,625,336,83,896,509,0,591,136,593,496,875,896,37,344,999,1};


struct Bigint{
	static const int Base = 100000000;
	static const int Width = 8;
	vector<int> s;
	Bigint(long long num = 0){*this=num;};
	Bigint operator = (long long num){
		s.clear();
		do{
			s.push_back(num % Base);
			num /= Base;
		}while(num > 0);
		return *this;
	}
	Bigint operator = (Bigint x){
		s = x.s;
		return *this;
	}
	Bigint operator * (const int &b) const{
		Bigint c; c.s.clear(); int g = 0;
		for(int i = 0; i < s.size(); i++){
			c.s.push_back(((long long) b * s[i] + g) % Base);
			g = ((long long) b*s[i] + g) / Base;
		}
		while(g) {c.s.push_back(g % Base); g/=Base;} 
		return c;
	}
	Bigint operator + (const Bigint &b) const{
		Bigint c; c.s.clear();
		for(int i = 0, g = 0; ; i++){
			if(g == 0 && i >= s.size() && i >= b.s.size()) break;
			int x = g;
			if(i < s.size()) x += s[i];
			if(i < b.s.size()) x += b.s[i];
			c.s.push_back(x % Base);
			g = x / Base;
		}
		return c;
	}
	Bigint operator *= (const int &b){
		*this = *this*b; return *this;
	}
	friend ostream& operator << (ostream &out, const Bigint &x) {
		out << x.s.back();
		for(int i = x.s.size() - 2; i >= 0; i--){
			char buf[20];
			sprintf(buf, "%08d", x.s[i]);
			int len = strlen(buf);
			for(int j = 0; j < len; j++) out << buf[j];
		}
		return out;
	}
	void print(){
		printf("%d", s.back());
		for(int i = s.size() - 2; i >= 0; i--){
			printf("%08d", s[i]);
		}
		printf("\n");
	}
}d[103][1000];

int main(){
    int n, x; scanf("%d%d", &n, &x);
    int f = x > 1000 ? g[x % 1000 + 1000] : g[x];
   	for(int i = 0; i < f; i++) d[0][i] = 1;
	for(int j = 1; j < f; j++){
		for(int i = 1; i < n; i++){
			d[i][j] = d[i][j-1] + d[i-1][j-1];
		}
	}
	d[n-1][f-1].print();
    return 0;
}
