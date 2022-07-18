#include <inttypes.h>

class C
{
    public:
        C ( int32_t & b_ ) : a ( new int32_t [ 10 ] ), b ( b_ )
        {
        }
            int32_t * getA () const
        // Non-compliant
        // Returns non const pointer to data
        {
            return a;
        }
        int32_t * getB () const
        // Non-compliant
        // Returns non const pointer to data
        {
            return &b;
        }

    private:
        int32_t * a;
        int32_t & b;
};