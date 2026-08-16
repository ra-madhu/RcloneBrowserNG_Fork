#ifndef PCH_H
#define PCH_H

// FORCE FIX: Explicitly forcing MSVC to bypass the internal stdext tracking validation
#ifdef _MSC_VER
#ifndef _SILENCE_STDEXT_ARR_IT_DEPRECATION_WARNING
#define _SILENCE_STDEXT_ARR_IT_DEPRECATION_WARNING
#endif
#endif

#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <cassert>

#include <QApplication>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QHash>
#include <QIcon>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QList>
#include <QMap>
#include <QProcess>
#include <QRegularExpression>
#include <QSet>
#include <QSettings>
#include <QString>
#include <QStringList>
#include <QTextStream>
#include <QUrl>
#include <QVariant>
#include <QVector>

#endif // PCH_H
