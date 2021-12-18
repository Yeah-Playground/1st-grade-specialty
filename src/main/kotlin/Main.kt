import algorithm.Factorial
import algorithm.Fibonacci
import java.util.*

fun main(args: Array<String>) {
    print("정수 : ")
    val scanner = Scanner(System.`in`)
    val input = scanner.nextLong()

//    println("${input}! = ${Factorial.factorial(input)}")
    val sUncache = System.currentTimeMillis()
    val fiboUncahe = Fibonacci.fibonacci(input)
    val eUncache = System.currentTimeMillis()
    println("${input}'s fibonacci : $fiboUncahe - ${eUncache - sUncache}ms")
    val sCache = System.currentTimeMillis()
    val fiboCache = Fibonacci.fiboCache(input)
    val eCache = System.currentTimeMillis()
    println("${input}'s fibonacci(cached) : $fiboCache - ${eCache - sCache}ms")
}
