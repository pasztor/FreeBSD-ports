# Created by: Edwin Groothuis
# $FreeBSD$

PORTNAME=	xrally
PORTVERSION=	1.1.1
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/1.1
DISTNAME=	${PORTNAME}-1.1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Clone of the classic Rally X arcade game

BROKEN_FreeBSD_13=	duplicate symbol: radar
BROKEN_FreeBSD_14=	duplicate symbol: radar

WRKSRC=		${WRKDIR}/${PORTNAME}
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
USES=		gmake tar:bzip2 xorg
USE_XORG=	x11 xi xpm
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib
MAKE_ENV=	INCLUDES="-I${LOCALBASE}/include"

.include <bsd.port.mk>
