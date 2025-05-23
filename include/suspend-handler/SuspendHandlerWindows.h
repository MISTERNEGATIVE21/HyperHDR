#pragma once

/* SuspendHandlerWindows.h
*
*  MIT License
*
*  Copyright (c) 2020-2025 awawa-dev
*
*  Project homesite: https://github.com/awawa-dev/HyperHDR
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.

*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
 */

#include <QAbstractNativeEventFilter>
#include <QAbstractEventDispatcher>
#define NOMINMAX
#include <windows.h>

#include <utils/Components.h>

#define HAVE_POWER_MANAGEMENT

class SuspendHandler : public QObject, public QAbstractNativeEventFilter {
	Q_OBJECT

	HPOWERNOTIFY	_notifyHandle, _notifyMonitorHandle;
	bool			_sessionLocker;

signals:
	void SignalHibernate(bool wakeUp, hyperhdr::SystemComponent source);

public:
	SuspendHandler(bool sessionLocker = false);
	~SuspendHandler();
#if (QT_VERSION < QT_VERSION_CHECK(6, 0, 0))
	virtual bool nativeEventFilter(const QByteArray& eventType, void* message, long* result) Q_DECL_OVERRIDE;
#else
	virtual bool nativeEventFilter(const QByteArray& eventType, void* message, qintptr* result) Q_DECL_OVERRIDE;
#endif
};
