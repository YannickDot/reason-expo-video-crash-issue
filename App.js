import React from 'react';
import { StyleSheet, Text, View } from 'react-native';

import MyVideo from '~reason/MyVideo.bs'

export default class App extends React.Component {
  render() {
    return (
      <View style={styles.container}>
        <MyVideo />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
