#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>

int main(void)
{
	int p, q, n, pi_n, e, d, i, M, E, D;
	std::cout << "�Ҽ� p, �Ҽ� q �� �Է��ϼ���." << std::endl;
	std::cin >> p >> q;
	std::cout << std::endl;
	n = p * q;
	pi_n = (p - 1) * (q - 1);
	std::cout << "n���� : " << n << " �Դϴ�." << std::endl;
	std::cout << "PI(n) ���� : " << pi_n << " �Դϴ�." << std::endl;
	std::cout << std::endl;

	std::cout << "e ���� �Է��ϼ���." << std::endl;
	std::cin >> e;

	d = 1;
	while (true) {
		if ((d * e) % pi_n == 1) break;
		d++;
	}
	
	std::cout << "d ���� " << d << "�Դϴ�." <<std::endl;
	
	std::cout << "---------����Ű----------" << std::endl;
	std::cout << "{" << e <<", "<< n << "}" << std::endl;
	std::cout << std::endl;

	std::cout << "---------����Ű----------" << std::endl;
	std::cout << "{" << d <<", "<< n << "}" << std::endl;
	std::cout << std::endl;

	std::cout << "�� �޽��� M �� �Է��ϼ���." << std::endl;
	std::cin >> M;

	std::cout << "---------��ȣȭ----------" << std::endl;
	std::cout << "��ȣ�� : M^" << e << " mod " << n << std::endl;
	std::cout << "= " << M << "^" << e << " mod " << n << std::endl;
	E = pow(M, e);
	E %= n;
	std::cout << "��ȣ�� E : " << E << std::endl;
	std::cout << std::endl;

	std::cout << "---------��ȣȭ----------" << std::endl;
	std::cout << "��ȣ�� : E^" << d << " mod " << n << std::endl;
	std::cout << "= " << E << "^" << d << " mod " << n << std::endl;
	D = pow(E, d);
	D %= n;
	std::cout << "��ȣ�� D : " << D << std::endl;;

	system("pause");

	return 0;
}