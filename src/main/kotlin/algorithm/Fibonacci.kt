package algorithm

import java.util.*

class Fibonacci {
    companion object {
        fun fibonacci(n: Long): Long {
//            if (n < 2)
//                return n
//            else
//                return fibonacci(n - 1) * fibonacci(n - 2)

            return if (n < 2) n else fibonacci(n - 1) + fibonacci(n - 2)
        }

        private val cache = mutableMapOf<Long, Long>()
        fun fiboCache(n: Long): Long {
            if (n < 2) return n
            if (Objects.isNull(cache[n])) {
                cache[n] = fiboCache(n - 1) + fiboCache(n - 2)
            }
            return cache[n]!!
        }
    }
}
