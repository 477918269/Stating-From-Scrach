
public class Add implements Operation{

	// �ӷ�����
	public double getResult(double numberA, double numberB) {

		return numberA + numberB;
	}
}


public class Sub implements Operation{

	// ��������
	public double getResult(double numberA, double numberB) {
		return numberA - numberB;
	}
}


public class Mul implements Operation{

	// �˷�����
	public double getResult(double numberA, double numberB) {
		return numberA * numberB;
	}
}


public class Div implements Operation {

	// ��������
	public double getResult(double numberA, double numberB) throws Exception{
		if (numberB == 0) {
			throw new Exception("��������Ϊ0��");
		}
		return numberA / numberB;
	}
}
