package algorithm

class Factorial {
    companion object {
        fun factorial (n: Long): Long {
//            if (n == 0)
//                return 1
//            else
//                return factorial(n - 1)

            return if (n == 0L) 1 else n * factorial(n - 1)
        }
    }
}
