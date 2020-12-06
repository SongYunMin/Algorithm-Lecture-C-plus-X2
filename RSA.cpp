#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>

int main(void)
{
	int p, q, n, pi_n, e, d, i, M, E, D;
	std::cout << "소수 p, 소수 q 를 입력하세요." << std::endl;
	std::cin >> p >> q;
	std::cout << std::endl;
	n = p * q;
	pi_n = (p - 1) * (q - 1);
	std::cout << "n값은 : " << n << " 입니다." << std::endl;
	std::cout << "PI(n) 값은 : " << pi_n << " 입니다." << std::endl;
	std::cout << std::endl;

	std::cout << "e 값을 입력하세요." << std::endl;
	std::cin >> e;

	d = 1;
	while (true) {
		if ((d * e) % pi_n == 1) break;
		d++;
	}
	
	std::cout << "d 값은 " << d << "입니다." <<std::endl;
	
	std::cout << "---------공개키----------" << std::endl;
	std::cout << "{" << e <<", "<< n << "}" << std::endl;
	std::cout << std::endl;

	std::cout << "---------개인키----------" << std::endl;
	std::cout << "{" << d <<", "<< n << "}" << std::endl;
	std::cout << std::endl;

	std::cout << "평문 메시지 M 을 입력하세요." << std::endl;
	std::cin >> M;

	std::cout << "---------암호화----------" << std::endl;
	std::cout << "암호문 : M^" << e << " mod " << n << std::endl;
	std::cout << "= " << M << "^" << e << " mod " << n << std::endl;
	E = pow(M, e);
	E %= n;
	std::cout << "암호문 E : " << E << std::endl;
	std::cout << std::endl;

	std::cout << "---------복호화----------" << std::endl;
	std::cout << "복호문 : E^" << d << " mod " << n << std::endl;
	std::cout << "= " << E << "^" << d << " mod " << n << std::endl;
	D = pow(E, d);
	D %= n;
	std::cout << "복호문 D : " << D << std::endl;;

	system("pause");

	return 0;
}