#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H
#include <stdexcept>
#include <deque>

namespace circular_buffer
{
    template <typename T>
    class circular_buffer
    {
    public:
        explicit circular_buffer(int size):max_size(size)
        {
            if(max_size <=0){throw std::domain_error("number should be > 0");}
        }

        const T& read()
        {
            if(buffer.empty()){throw std::domain_error ("data not found");}

            T& value = buffer.front();
            buffer.pop_front();
            return value;
        }

        void write(const T& value)
        {
            if (buffer.size() >= max_size){throw std::domain_error ("Buffer is full. Cannot push.");}

            buffer.push_back(value);
        }

        void overwrite(const T& value)
        {
            if(buffer.size() < max_size)
            {
                write(value);
            }
            else
            {
                buffer.pop_front();
                buffer.push_back(value);
            }
        }

        void clear()
        {
            buffer.clear();
        }
    private:
        size_t max_size;
        std::deque<T> buffer;
    };
}// namespace circular_buffer

#endif // CIRCULAR_BUFFER_H