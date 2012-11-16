program col_major
        implicit none
        real etime          ! Declare the type of etime()
        real elapsed(2)     ! For receiving user and system time
        real total          ! For receiving total time

        integer, parameter :: dim = 1024
        integer i, j
        real*8 a(dim, dim)
        do 10 i = 1, dim
                do 10 j = 1, dim
                        a(j,i) = 0.01 * i + j
        10 continue

	total = etime(elapsed)
        print *, 'End: total=', total, 'user=', elapsed(1), ' system=', elapsed(2)
end
