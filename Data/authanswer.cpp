#include "authanswer.h"

AuthAnswer::AuthAnswer(bool answer) :
    answer(answer)
{ }

QDataStream& AuthAnswer::toStream(QDataStream &stream)
{
    stream << answer;
    return stream;
}

QDataStream& AuthAnswer::fromStream(QDataStream &stream)
{
    stream >> answer;
    return stream;
}

size_t AuthAnswer::size()
{
    return sizeof(bool);
}

DataType AuthAnswer::type()
{
    return DataType::AuthResponse;
}

bool AuthAnswer::isSigned() const
{
    return answer;
}
