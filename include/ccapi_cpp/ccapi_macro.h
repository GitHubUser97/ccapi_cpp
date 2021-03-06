#ifndef INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
#define INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
#define CCAPI_MARKET_DEPTH "MARKET_DEPTH"
#define CCAPI_TRADE "TRADE"
#ifndef CCAPI_MARKET_DEPTH_MAX
#define CCAPI_MARKET_DEPTH_MAX CCAPI_MARKET_DEPTH "_MAX"
#endif
#define CCAPI_MARKET_DEPTH_SUBSCRIBED_TO_EXCHANGE CCAPI_MARKET_DEPTH "_SUBSCRIBED_TO_EXCHANGE"
#define CCAPI_MARKET_DEPTH_MAX_DEFAULT "1"
#ifndef CCAPI_CONFLATE_INTERVAL_MILLISECONDS
#define CCAPI_CONFLATE_INTERVAL_MILLISECONDS "CONFLATE_INTERVAL_MILLISECONDS"
#endif
#define CCAPI_CONFLATE_INTERVAL_MILLISECONDS_DEFAULT "0"
#ifndef CCAPI_CONFLATE_GRACE_PERIOD_MILLISECONDS
#define CCAPI_CONFLATE_GRACE_PERIOD_MILLISECONDS "CONFLATE_GRACE_PERIOD_MILLISECONDS"
#endif
#define CCAPI_CONFLATE_GRACE_PERIOD_MILLISECONDS_DEFAULT "-1"
#ifndef CCAPI_EXCHANGE_NAME_COINBASE
#define CCAPI_EXCHANGE_NAME_COINBASE "coinbase"
#endif
#ifndef CCAPI_EXCHANGE_NAME_GEMINI
#define CCAPI_EXCHANGE_NAME_GEMINI "gemini"
#endif
#ifndef CCAPI_EXCHANGE_NAME_KRAKEN
#define CCAPI_EXCHANGE_NAME_KRAKEN "kraken"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITSTAMP
#define CCAPI_EXCHANGE_NAME_BITSTAMP "bitstamp"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITFINEX
#define CCAPI_EXCHANGE_NAME_BITFINEX "bitfinex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITMEX
#define CCAPI_EXCHANGE_NAME_BITMEX "bitmex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE_US
#define CCAPI_EXCHANGE_NAME_BINANCE_US "binance-us"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE
#define CCAPI_EXCHANGE_NAME_BINANCE "binance"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE_FUTURES
#define CCAPI_EXCHANGE_NAME_BINANCE_FUTURES "binance-futures"
#endif
#ifndef CCAPI_EXCHANGE_NAME_HUOBI
#define CCAPI_EXCHANGE_NAME_HUOBI "huobi"
#endif
#ifndef CCAPI_EXCHANGE_NAME_OKEX
#define CCAPI_EXCHANGE_NAME_OKEX "okex"
#endif
#ifndef CCAPI_LAST_PRICE
#define CCAPI_LAST_PRICE "LAST_PRICE"
#endif
#ifndef CCAPI_LAST_SIZE
#define CCAPI_LAST_SIZE "LAST_SIZE"
#endif
#ifndef CCAPI_TRADE_ID
#define CCAPI_TRADE_ID "TRADE_ID"
#endif
#ifndef CCAPI_IS_BUYER_MAKER
#define CCAPI_IS_BUYER_MAKER "IS_BUYER_MAKER"
#endif
#ifndef CCAPI_BEST_BID_N_PRICE
#define CCAPI_BEST_BID_N_PRICE "BID_PRICE"
#endif
#ifndef CCAPI_BEST_BID_N_PRICE_EMPTY
#define CCAPI_BEST_BID_N_PRICE_EMPTY ""
#endif
#ifndef CCAPI_BEST_BID_N_SIZE
#define CCAPI_BEST_BID_N_SIZE "BID_SIZE"
#endif
#ifndef CCAPI_BEST_BID_N_SIZE_EMPTY
#define CCAPI_BEST_BID_N_SIZE_EMPTY ""
#endif
#ifndef CCAPI_BEST_ASK_N_PRICE
#define CCAPI_BEST_ASK_N_PRICE "ASK_PRICE"
#endif
#ifndef CCAPI_BEST_ASK_N_PRICE_EMPTY
#define CCAPI_BEST_ASK_N_PRICE_EMPTY ""
#endif
#ifndef CCAPI_BEST_ASK_N_SIZE
#define CCAPI_BEST_ASK_N_SIZE "ASK_SIZE"
#endif
#ifndef CCAPI_BEST_ASK_N_SIZE_EMPTY
#define CCAPI_BEST_ASK_N_SIZE_EMPTY ""
#endif
#define CCAPI_WEBSOCKET_COINBASE_CHANNEL_MATCH "matches"
#define CCAPI_WEBSOCKET_COINBASE_CHANNEL_LEVEL2 "level2"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_TRADES "trades"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_BIDS "bids"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_OFFERS "offers"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_TOP_OF_BOOK "top_of_book"
#define CCAPI_WEBSOCKET_KRAKEN_CHANNEL_TRADE "trade"
#define CCAPI_WEBSOCKET_KRAKEN_CHANNEL_BOOK "book"
#define CCAPI_WEBSOCKET_BITSTAMP_CHANNEL_LIVE_TRADES "live_trades"
#define CCAPI_WEBSOCKET_BITSTAMP_CHANNEL_ORDER_BOOK "order_book"
#define CCAPI_WEBSOCKET_BITFINEX_CHANNEL_TRADES "trades"
#define CCAPI_WEBSOCKET_BITFINEX_CHANNEL_BOOK "book"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_TRADE "trade"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_QUOTE "quote"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_10 "orderBook10"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_L2_25 "orderBookL2_25"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_L2 "orderBookL2"
#define CCAPI_WEBSOCKET_BINANCE_BASE_CHANNEL_TRADE "trade"
#define CCAPI_WEBSOCKET_BINANCE_BASE_CHANNEL_PARTIAL_BOOK_DEPTH "depth"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_TRADE_DETAIL "market.$symbol.trade.detail"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_TRADE_DETAIL_REGEX "market\\.(.+)\\.trade\\.detail"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_MARKET_DEPTH "market.$symbol.depth.step0"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_MARKET_DEPTH_REGEX "market\\.(.+)\\.depth\\.step0"
#define CCAPI_WEBSOCKET_OKEX_CHANNEL_TRADE "spot/trade"
#define CCAPI_WEBSOCKET_OKEX_CHANNEL_PUBLIC_DEPTH400 "spot/depth"
#ifndef CCAPI_CHANNEL_ID
#define CCAPI_CHANNEL_ID "channelId"
#endif
#ifndef CCAPI_SYMBOL_ID
#define CCAPI_SYMBOL_ID "symbolId"
#endif
#define CCAPI_CONNECTION "CONNECTION"
#define CCAPI_REASON "REASON"
#ifndef CCAPI_MARKET_DATA
#define CCAPI_MARKET_DATA "market_data"
#endif
#ifndef CCAPI_EXECUTION_MANAGEMENT
#define CCAPI_EXECUTION_MANAGEMENT "execution_management"
#endif
#define CCAPI_EM_ORDER "ORDER"
#ifndef CCAPI_EM_ORDER_SIDE
#define CCAPI_EM_ORDER_SIDE "SIDE"
#endif
#ifndef CCAPI_EM_ORDER_SIDE_BUY
#define CCAPI_EM_ORDER_SIDE_BUY "BUY"
#endif
#ifndef CCAPI_EM_ORDER_SIDE_SELL
#define CCAPI_EM_ORDER_SIDE_SELL "SELL"
#endif
#ifndef CCAPI_EM_ORDER_QUANTITY
#define CCAPI_EM_ORDER_QUANTITY "QUANTITY"
#endif
#ifndef CCAPI_EM_ORDER_LIMIT_PRICE
#define CCAPI_EM_ORDER_LIMIT_PRICE "LIMIT_PRICE"
#endif
#ifndef CCAPI_EM_ORDER_ID
#define CCAPI_EM_ORDER_ID "ORDER_ID"
#endif
#ifndef CCAPI_EM_CLIENT_ORDER_ID
#define CCAPI_EM_CLIENT_ORDER_ID "CLIENT_ORDER_ID"
#endif
#ifndef CCAPI_EM_ORDER_CUMULATIVE_FILLED_QUANTITY
#define CCAPI_EM_ORDER_CUMULATIVE_FILLED_QUANTITY "CUMULATIVE_FILLED_QUANTITY"
#endif
#ifndef CCAPI_EM_ORDER_CUMULATIVE_FILLED_PRICE_TIMES_QUANTITY
#define CCAPI_EM_ORDER_CUMULATIVE_FILLED_PRICE_TIMES_QUANTITY "CUMULATIVE_FILLED_PRICE_TIMES_QUANTITY"
#endif
#ifndef CCAPI_EM_ORDER_INSTRUMENT
#define CCAPI_EM_ORDER_INSTRUMENT "INSTRUMENT"
#endif
#ifndef CCAPI_EM_ORDER_STATUS
#define CCAPI_EM_ORDER_STATUS "STATUS"
#endif
#ifndef CCAPI_EM_ORDER_STATUS_UNKNOWN
#define CCAPI_EM_ORDER_STATUS_UNKNOWN "UNKNOWN"
#endif
#ifndef CCAPI_EM_ORDER_STATUS_OPEN
#define CCAPI_EM_ORDER_STATUS_OPEN "OPEN"
#endif
#ifndef CCAPI_EM_ORDER_STATUS_CLOSED
#define CCAPI_EM_ORDER_STATUS_CLOSED "CLOSED"
#endif
#ifndef CCAPI_HTTP_STATUS_CODE
#define CCAPI_HTTP_STATUS_CODE "HTTP_STATUS_CODE"
#endif
#define CCAPI_ERROR_MESSAGE "ERROR_MESSAGE"
#define CCAPI_UNSUPPORTED_VALUE "UNSUPPORTED VALUE"
#ifndef CCAPI_CORRELATION_ID_GENERATED_LENGTH
#define CCAPI_CORRELATION_ID_GENERATED_LENGTH 32
#endif
#ifndef CCAPI_BINANCE_US_URL_REST_BASE
#define CCAPI_BINANCE_US_URL_REST_BASE "https://api.binance.us"
#endif
#ifndef CCAPI_BINANCE_US_CREATE_ORDER_TARGET
#define CCAPI_BINANCE_US_CREATE_ORDER_TARGET "/api/v3/order"
#endif
#ifndef CCAPI_BINANCE_URL_REST_BASE
#define CCAPI_BINANCE_URL_REST_BASE "https://api.binance.com"
#endif
#ifndef CCAPI_BINANCE_CREATE_ORDER_TARGET
#define CCAPI_BINANCE_CREATE_ORDER_TARGET "/api/v3/order"
#endif
#ifndef CCAPI_BINANCE_FUTURES_URL_REST_BASE
#define CCAPI_BINANCE_FUTURES_URL_REST_BASE "https://fapi.binance.com"
#endif
#ifndef CCAPI_BINANCE_FUTURES_CREATE_ORDER_TARGET
#define CCAPI_BINANCE_FUTURES_CREATE_ORDER_TARGET "/fapi/v1/order"
#endif
#ifndef CCAPI_BINANCE_US_API_KEY
#define CCAPI_BINANCE_US_API_KEY "BINANCE_US_API_KEY"
#endif
#ifndef CCAPI_BINANCE_US_API_SECRET
#define CCAPI_BINANCE_US_API_SECRET "BINANCE_US_API_SECRET"
#endif
#ifndef CCAPI_BINANCE_API_KEY
#define CCAPI_BINANCE_API_KEY "BINANCE_API_KEY"
#endif
#ifndef CCAPI_BINANCE_API_SECRET
#define CCAPI_BINANCE_API_SECRET "BINANCE_API_SECRET"
#endif
#ifndef CCAPI_BINANCE_FUTURES_API_KEY
#define CCAPI_BINANCE_FUTURES_API_KEY "BINANCE_FUTURES_API_KEY"
#endif
#ifndef CCAPI_BINANCE_FUTURES_API_SECRET
#define CCAPI_BINANCE_FUTURES_API_SECRET "BINANCE_FUTURES_API_SECRET"
#endif
#endif  // INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
