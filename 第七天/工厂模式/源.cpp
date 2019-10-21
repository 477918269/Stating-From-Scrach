
public class Add implements Operation{

	// 加法计算
	public double getResult(double numberA, double numberB) {

		return numberA + numberB;
	}
}


public class Sub implements Operation{

	// 减法计算
	public double getResult(double numberA, double numberB) {
		return numberA - numberB;
	}
}


public class Mul implements Operation{

	// 乘法计算
	public double getResult(double numberA, double numberB) {
		return numberA * numberB;
	}
}


public class Div implements Operation {

	// 除法计算
	public double getResult(double numberA, double numberB) throws Exception{
		if (numberB == 0) {
			throw new Exception("除数不能为0！");
		}
		return numberA / numberB;
	}
}
