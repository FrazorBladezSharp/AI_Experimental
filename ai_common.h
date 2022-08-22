#ifndef AI_COMMON_H
#define AI_COMMON_H

/////////////////////// Dependency Includes ///////////////////////////

#include <QMainWindow>
#include <QTimer>

/////////////////// C Standard Lib Includes ////////////////////////////



/////////////////// C++ Standard Lib Includes /////////////////////////

#include <memory>

//////////////////////////// Defines //////////////////////////////////

#define UNUSED -1

//////////////////////////// Templates //////////////////////////////////

template<typename T>
using Scope = std::unique_ptr<T>;
template<typename T, typename ... Args>
constexpr Scope<T> CreateScope(Args&& ... args)
{
    return std::make_unique<T>(std::forward<Args>(args)...);
}

template<typename T>
using Ref = std::shared_ptr<T>;
template<typename T, typename ... Args>
constexpr Ref<T> CreateRef(Args&& ... args)
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}

////////////////////////// Typedefs ////////////////////////////////////

typedef uint8_t		u8;
typedef uint32_t    u32;
typedef uint64_t	u64;
typedef int8_t		i8;
typedef int32_t     i32;
typedef int64_t     i64;

//////////////////////////// Structs //////////////////////////////////

typedef struct {

    // main loop
    bool is_running;

} AI_State_Current;


//////////////////////////// Data Structures //////////////////////////

typedef struct {

    i64 id;

} Neuron;

#endif // AI_COMMON_H
