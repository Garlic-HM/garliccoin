// Copyright (c) 2011-2020 The Garliccoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GARLICCOIN_QT_GARLICCOINADDRESSVALIDATOR_H
#define GARLICCOIN_QT_GARLICCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class GarliccoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GarliccoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Garliccoin address widget validator, checks for a valid garliccoin address.
 */
class GarliccoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GarliccoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // GARLICCOIN_QT_GARLICCOINADDRESSVALIDATOR_H
