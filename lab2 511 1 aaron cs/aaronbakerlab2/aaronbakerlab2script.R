library(ggplot2)
library(ggthemes)
df <- read.csv("weather_high_temps.csv")
df$SeasonOrdered = factor(df$Season,levels=dfSeason[c(1,2,3,4)])
ggplot(df,aes(x=SeasonOrdered,y=Temperature,fill=City)) +
  geom_col(position="dodge") +
  ggtitle("Average high temperature across \n seasons in several US cities") +
  xlab("Season") +
  ylab("Temperature (F)")

