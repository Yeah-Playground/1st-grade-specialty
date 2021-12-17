import algorithm.Factorial
import java.util.*

fun main(args: Array<String>) {
    print("정수 : ")
    val scanner = Scanner(System.`in`)
    val input = scanner.nextInt()

    println("${input}! = ${Factorial.factorial(input)}")
}
