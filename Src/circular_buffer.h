#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H

#include <stdexcept>
#include <deque>

namespace circular_buffer
{
    template<typename T>
    class circular_buffer
    {
    public:
        explicit circular_buffer(size_t size) : max_size(size)
        {
            if (max_size < 1) { throw std::domain_error("number should be at least 1"); }
        }

        T read()
        {
            if (buffer.empty()) { throw std::domain_error("data not found"); }

            T value = buffer.front();
            buffer.pop_front();
            return value;
        }

        void write(const T &value)
        {
            if (buffer.size() >= max_size) {
                throw std::domain_error("Buffer is full. Cannot push.");
            }

            buffer.push_back(value);
        }

        void overwrite(const T &value)
        {
            if (buffer.size() == max_size) {
                read();
            }
            write(value);
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